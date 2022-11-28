#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isalpha(int c)
{
	if ((('A' <= c) && (c <= 'Z')) || (('a' <= c) && (c <= 'z')))
		return (1);
	else return (0);
}

int	main(void)
{
	char c;

	c = 'E';
	ft_putchar(ft_isalpha(c) + '0');
	return (0);
}
