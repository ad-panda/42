#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != (char)c && i < n)
	{
		if (str[i] == '\0' || i + 1 == n)
			return (NULL);
		i++;
	}
	return (str + i);
}