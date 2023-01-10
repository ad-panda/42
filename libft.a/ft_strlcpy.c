#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	len;
	int	lendest;

	i = 0;
	j = 0;
	len = ft_strlen(src);
	lendest = ft_strlen(dest);

	while(size > i)
	{
		dest[i] = src[i];
		i ++;
	}
	dest[lendest + i] = '\0';
	while(dest[j])
        {
                ft_putchar(dest[j++]);
        }
	return(len);
}
