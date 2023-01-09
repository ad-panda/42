#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int	i;
	int	j;
	char const T[];

	i = 0;
	j = 0;
	T = (char *)malloc(len * 1);
	while (s[i])
	{
		if (s[i] == start)
		{
			while (T[j])
			{
				t[j] = s[i];
				j++;
				i++;
			}
		}
		else
			i++;
	}
	return (T);
}
