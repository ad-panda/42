#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	unsigned char	*str;
	unsigned char	*src;

	i = 0;
	str = restrict dst;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

