#include "libft.h"

size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	size_t	lensrc;
	char	*str;

	i = 0;
	str = (char *)src;
	lensrc = ft_strlen(str);
	while(i < dstsize && i <= lensrc)
	{
		dst[i] = src[i];
		i++;
	}
	dst[dstsize - 1] = '\0';
	return(lensrc);
}
