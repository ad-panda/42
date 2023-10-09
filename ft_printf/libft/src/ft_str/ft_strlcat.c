/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <asimoes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 22:24:15 by asimoes-          #+#    #+#             */
/*   Updated: 2023/05/03 00:30:00 by asimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	size_t			lendst;
	size_t			lensrc;
	char			*str;

	i = 0;
	str = (char *)src;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(str);
	if (lendst < dstsize - 1 && dstsize > 0)
	{
		while (str[i] && lendst + i < dstsize - 1)
		{
			dst[lendst + i] = str[i];
			i++;
		}
		dst[lendst + i] = 0;
	}
	if (lendst >= dstsize)
		lendst = dstsize;
	return (lendst + lensrc);
}
