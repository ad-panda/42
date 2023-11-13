/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <asimoes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:41:01 by asimoes-          #+#    #+#             */
/*   Updated: 2023/11/13 13:27:49 by asimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_new_strstash(char *strstash)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (strstash[i] && strstash[i] != '\n')
		i++;
	if (!strstash[i])
	{
		free(strstash);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(strstash) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (strstash[i])
		str[j++] = strstash[i++];
	str[j] = '\0';
	free(strstash);
	return (str);
}

char	*ft_read_to_strstash(int fd, char *strstash)
{
	char	*buff;
	int		nb_bytes;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	nb_bytes = 1;
	while (!ft_strchr(strstash, '\n') && nb_bytes != 0)
	{
		nb_bytes = read(fd, buff, BUFFER_SIZE);
		if (nb_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[nb_bytes] = '\0';
		strstash = ft_strjoin(strstash, buff);
	}
	free(buff);
	return (strstash);
}

char	*get_next_line(int fd)
{
	char		*the_line;
	static char	*strstash;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	strstash = ft_read_to_strstash(fd, strstash);
	if (!strstash)
		return (NULL);
	the_line = ft_get_the_line(strstash);
	strstash = ft_new_strstash(strstash);
	return (the_line);
}
