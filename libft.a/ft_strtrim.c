#include "libft.h"

static	char	*ft_replace(char *str, int i)
{
	while (str[i])
	{
		str[i] = str[i + 1];
		i++;
	}
	return (str);
}

static	char	*ft_strcpy(char *cpy, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cpy;
	char	*str1;
	int	j;
	int	i;

	i = 0;
	j = 0;
	str1 = (char *)s1;
	while (str1[i])
	{
		while (set[j] && str1[i] != set[j])
			j++;
		if (set[j] == '\0')
		{
			i++;
		}
		str1 = ft_replace(str1, i);
		j = 0;
	}
	if ((cpy = malloc(ft_strlen(str1) + 1)) == NULL)
		return (NULL);
	cpy = ft_strcpy(cpy, str1);
	return (cpy);
}

