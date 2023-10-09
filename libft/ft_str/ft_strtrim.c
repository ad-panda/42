/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <asimoes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 22:24:50 by asimoes-          #+#    #+#             */
/*   Updated: 2023/05/02 23:50:23 by asimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	l;
	char	*str;

	if (!s1 && !set)
		return (NULL);
	i = 0;
	l = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (i == l)
	{
		str = ft_strdup("");
		if (str == NULL)
			return (NULL);
		else
			return (str);
	}
	while (s1[l - 1] && ft_strchr(set, s1[l - 1]) && l > i)
		l--;
	str = (char *)malloc(sizeof(char) * (l - i + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[i], l - i + 1);
	return (str);
}
