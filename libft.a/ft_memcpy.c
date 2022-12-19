#include <unistd.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, int n)
{
	int	i;

	i = 0;
	return (dst);
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
}

