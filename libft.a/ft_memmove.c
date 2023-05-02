/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <asimoes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:02:28 by asimoes-          #+#    #+#             */
/*   Updated: 2023/05/01 16:48:33 by asimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void    *ft_memcpy2(void *dst, const void *src, size_t n)
{
    size_t  len;
    unsigned char    *str;
    unsigned char    *str2;

    str = (unsigned char*)dst;
    str2 = (unsigned char*)src;
    if (str == NULL && str2 == NULL)
        return (dst);
    len = n - 1;
    while (0 < n)
    {
        str[len] = str2[len];
        n--;
        len--;
    }
    return (dst);
}

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	return (ft_memcpy2(dst, src, len));
}