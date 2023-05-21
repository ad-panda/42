/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <asimoes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 22:24:40 by asimoes-          #+#    #+#             */
/*   Updated: 2023/05/03 12:37:41 by asimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	ft_size(size_t size)
{
	if ((long long)size < 0)
		return ((long long)__LONG_LONG_MAX__);
	return ((long long)size);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	n = ft_size(n) + 1;
	if (!needle[0])
		return ((char *)haystack);
	while (--n > 0 && haystack[i] != '\0')
	{
		j = 0;
		while ((haystack[i] == needle[j] && needle[j] != '\0'))
		{
			i++;
			j++;
		}
		if (needle[j] == '\0' && (long long)n - (long long)j >= 0)
			return ((char *)haystack + (i - j));
		else
		{
			i = i - j;
			j = 0;
		}
		i++;
	}
	return (NULL);
}
