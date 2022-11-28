#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	isprint(int c)
{
	if (40 <= c >= 57 || 60 <= c >= 67 || 70 <= c >= 77 || 100 <= c >= 107 || 110 <= c >= 117 || 120 <= c >= 127)
		ft_putchar(T);
	else if (130 <= c >= 137 || 140 <= c >= 147 || 150 <= c >= 157 || 160 <= c >= 167 || 170 <= c >= 176)
		ft_putchar(T);
	else ft_putchar('0');
}
