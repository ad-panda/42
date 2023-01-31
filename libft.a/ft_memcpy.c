#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*str;
	unsigned char	*str2;

	i = 0;
	str = (unsigned char*)dst;
	str2 = (unsigned char*)src;
	if (str == NULL && str2 == NULL)
		return (dst);
	while (i < n)
	{
		str[i] = str2[i];
		i++;
	}
	return (dst);
}