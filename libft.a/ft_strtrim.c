#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	k;
	int	nb;
	char	*copy;

	i = 0;
	j = 0;
	k = 0;
	if ((copy = (char *)malloc(sizeof(char) * ft_strlen(s1))) == NULL)
		return (NULL);
	if (s1 == NULL)
		retun (NULL);
	while (s1[i])
	{
		while (set[j])
		{
			nb = i;
			if (s1[i] == set[j])
				i++;
			j++;
		}
		j = 0;
		if (i == nb)
		{
			copy[k] = s1[i];
		}
		k++;
	}
	return (copy);
}

