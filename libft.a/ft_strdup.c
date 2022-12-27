#include "libft.h"

char	*strdup(const char *s1)
{
	const char	*cpy;
	int	i;
	int	len;

	i = 0;
	len = (ft_strlen(s1) + 1);
	cpy = (char *)malloc(sizeof(char) * len);

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
