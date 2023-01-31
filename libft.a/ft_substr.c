#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if ((str = malloc(len + 1)) == NULL)
		return (NULL);
	if (start >= ft_strlen((char *)s))
	{
		str[i] = '\0';
		return (str);
	}
	while (s[start] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}