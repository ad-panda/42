/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <asimoes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 22:24:29 by asimoes-          #+#    #+#             */
/*   Updated: 2023/05/03 00:04:47 by asimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*s1;
	size_t	i;

	i = 0;
	s1 = (char *)s;
	str = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = f((unsigned int)i, s1[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
