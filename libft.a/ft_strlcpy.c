#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len])
		len ++;
	return(len);
}

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

int	main(int argc, char **argv)
{
	unsigned int	size;
	unsigned int	len;

	size = argv[3][0] - '0';
	len = ft_strlcpy(argv[1], argv[2], size);
	return (0);
}
