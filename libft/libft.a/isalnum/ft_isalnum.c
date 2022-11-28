#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	isalnum(int c)
{
	if ((('A' <= c) && (c <= 'Z')) || (('a' <= c) && (c <= 'z')))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else return (0);
}

int 	main(void)
{
	ft_putchar(isalnum('=') + '0');
	return (0);
}
