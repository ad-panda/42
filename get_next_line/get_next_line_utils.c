/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <asimoes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:25:17 by asimoes-          #+#    #+#             */
/*   Updated: 2023/11/13 13:20:39 by asimoes-         ###   ########.fr       */
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

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != (char)c)
	{
		if (str[i] == '\0')
			return (NULL);
		i++;
	}
	return (str + i);
}

static	char	*ft_strcat(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		ls3;
	int		j;
	int		len;
	char	*s3;

	j = 0;
	len = (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	(s3 = malloc(len));
	if (s3 == NULL)
		return (NULL);
	s3 = ft_strcat(s3, (char *)s1);
	ls3 = ft_strlen(s3);
	while (s2[j])
	{
		s3[ls3] = s2[j];
		ls3++;
		j++;
	}
	s3[ls3] = '\0';
	return (s3);
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
