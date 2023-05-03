/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <asimoes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 21:01:28 by asimoes-          #+#    #+#             */
/*   Updated: 2023/05/02 21:07:08 by asimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str;
	char	*str2;

	i = 0;
	str = (char *)dst;
	str2 = (char *)src;
	if (str == NULL && str2 == NULL)
		return (dst);
	while (i < n)
	{
		str[i] = str2[i];
		i++;
	}
	return (dst);
}
