#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	i;
	char	*dst;
	const char	*src;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

