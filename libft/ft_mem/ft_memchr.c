/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <asimoes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 20:13:08 by asimoes-          #+#    #+#             */
/*   Updated: 2023/05/02 20:13:59 by asimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (n == 0)
		return (NULL);
	while ((unsigned char)str[i] != (unsigned char)c)
	{
		if (i >= n - 1)
			return (NULL);
		i++;
	}
	return ((void *)str + i);
}
