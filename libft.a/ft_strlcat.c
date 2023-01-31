#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	size_t	lendst;
	size_t	lensrc;
	char	*str;

	i = 0;
	str = (char *)src;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(str);
	if (dstsize == 0)
		return (lendst + lensrc);
	if (dstsize < lendst)
		return (lendst);
	while(i < dstsize)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return(lendst + lensrc);
}