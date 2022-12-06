#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	isascii(int c)
{
	if ( 0 <= c && c <= 177)
		return (1);
	else return (0);
}


int	main(void)
{
	ft_putchar(isascii('a') + '0');
	return (0);
}
