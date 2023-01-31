#include "libft.h"

static	char	*ft_strcat(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	ls3;
	int	j;
	size_t	len;
	char	*s3;

	j = 0;
	len = (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if ((s3 = malloc(len)) == NULL)
		return (NULL);
	s3 = ft_strcat(s3, (char *)s1);
	ls3 = ft_strlen(s3);
	while (s2[j])
	{
		s3[ls3] = s2[j];
		ls3++;
		j++;
	}
	s3[ls3] = '\0';
	return (s3);
}