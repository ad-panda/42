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
		len++;
	return (len);
}

int	main(int argc, char **argv)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	len = ft_strlen(argv[1]);
	ft_putchar(len + '0');
	ft_putchar('\n');
	while(i < len)
	{
		ft_putchar(argv[1][i]);
		i++;
	}
	return(0);
}
