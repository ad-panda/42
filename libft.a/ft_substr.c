#include "libft.h"

static size_t	ft_malloc_size(char const *s, unsigned int start, size_t len)
{
	if (len >= ft_strlen(s) - start)
		return (ft_strlen(s) - start + 1);
	return (len + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (start >= ft_strlen((char *)s))
	{
		str = (char *) malloc (sizeof(char));
		if (!str)
			return (NULL);
		str[i] = '\0';
		return (str);
	}
	str = (char *) malloc(ft_malloc_size(s, start, len));
	if (str == NULL)
		return (NULL);
	while (s[start] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
