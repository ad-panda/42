#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
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
		dest[lendest + i] = src[i];
		i ++;
	}
	dest[lendest + i] = '\0';
	while(dest[j])
        {
                ft_putchar(dest[j++]);
        }
	return(len);
}

int	main(int argc, char **argv)
{
	unsigned int	size;
	unsigned int	len;
	char nb;

	nb = argv[3][0] - '0';
	size = nb;
	len = ft_strlcat(argv[1], argv[2], size);
	return (0);
}
