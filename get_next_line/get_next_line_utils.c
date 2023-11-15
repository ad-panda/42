/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <asimoes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:25:17 by asimoes-          #+#    #+#             */
/*   Updated: 2023/11/14 16:32:21 by asimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *strstash, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!strstash)
	{
		strstash = (char *)malloc(1 * sizeof(char));
		strstash[0] = '\0';
	}
	if (!strstash || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(strstash) + ft_strlen(buff)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (strstash)
		while (strstash[++i] != '\0')
			str[i] = strstash[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(strstash) + ft_strlen(buff)] = '\0';
	free(strstash);
	return (str);
}

char	*ft_get_the_line(char *strstash)
{
	int		i;
	char	*str;

	i = 0;
	if (!strstash[i])
		return (NULL);
	while (strstash[i] && strstash[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (strstash[i] && strstash[i] != '\n')
	{
		str[i] = strstash[i];
		i++;
	}
	if (strstash[i] == '\n')
	{
		str[i] = strstash[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
