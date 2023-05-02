#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (str + i);
		i--;
	}
	return (NULL);
}