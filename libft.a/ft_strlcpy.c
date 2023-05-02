#include "libft.h"

size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	size_t	lensrc;

	i = 0;
	lensrc = ft_strlen(src);
	if (dstsize == 0)
		return (lensrc);
	while(i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lensrc);
}
