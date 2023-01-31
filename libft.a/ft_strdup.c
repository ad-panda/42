#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int	i;
	int	len;

	i = 0;
	len = (ft_strlen((char *)s1) + 1);
	cpy = malloc(len);
	if (cpy == NULL)
		return (NULL);
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}
