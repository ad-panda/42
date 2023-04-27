#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	int	i;
	char	*str;

	i = ft_strlen((char *)s);
	str = (char *)s;
	while (str[i] != (char)c && i >= 0)
	{
		if (str[i - 1] == '\0')
			return (NULL);
		i--;
	}
        if (str[i] != (char)c)
                return (NULL);
	return ((char *)s + i);
}