#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char*)b;
	while (len > 0)
	{
		str[i] = (unsigned char)c;
		i++;
		len--;
	}
	b = (void*)str;
	return (b);
}
