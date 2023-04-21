#include "libft.h"

static	char	*ft_strcpy_len(char *cpy, char *src, size_t i, size_t l)
{
	int	j;

	j = 0;
	while (i <= l)
	{
		cpy[j] = src[i];
		i++;
		j++;
	}
	cpy[j] = '\0';
	return (cpy);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cpy;
	char	*str1;
	int	j;
	size_t	i;
	size_t	len;
	size_t	l;

	i = 0;
	j = 0;
	str1 = (char *)s1;
	len = ft_strlen(str1);
	l = len - 1; // correspond a l'indice max de str1 copier dans cpy;
	while (set[j] == str1[l] && set[j])
	{
		j++;
		l--;
	}
	while (set[j] == str1[i])
	{
		j++;
		i++;
	}
	if ((cpy = malloc(len + 1 - j)) == NULL)
		return (NULL);
	cpy = ft_strcpy_len(cpy, str1, i, l);
	return (cpy);
}

