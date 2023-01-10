#include "libft.h"

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;
	int	nb;
	int	len;
	int	len2;

	i = 0;
	nb = 0;
	len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	while((i < len) & (i < len2) & (i < n))
	{
		if (s1[i] < s2[i])
			return (2);
		else if (s1[i] > s2[i])
			return (1);
		else if (s1[i] == s2[i])
			i++;
	}
	return (0);
}
