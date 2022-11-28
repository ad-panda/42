#include <unistd.h>

int	isdigit(int c);

void	ft_putchar(c)
{
	write(1, &c, 1);
}

int	isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else return (0);
}

int	main(void)
{
	ft_putchar(isdigit('a') + '0');
	return (0);
}

