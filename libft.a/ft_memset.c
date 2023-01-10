#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;
	unsigned char	*str;

	i = 0;
	str = b;
	while (str[i] || len >= 0)
	{
		str[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}
