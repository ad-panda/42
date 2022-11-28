#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *tab)
{
	int	a;
	int	i;
	int	nb;

	i = 0;
	a = 1;
	nb = 0;

	while (tab[i] == ' ')
	i++;
	while (tab[i] == '-' || tab[i] == '+')
	{
		if (tab[i] == '-')
		a *= -1;
		i++;
	}
	while ((tab[i] >= 'a' && tab[i] <= 'z') || (tab[i] >= 'A' && tab[i] <= 'Z'))
	i++;
	if (tab[i] >= '0' && tab[i] <= '9')
	nb += tab[i] - '0';
	nb *= a;
  
	return (nb);
}


int	main(int argc, char **argv)
{
	int a;

	a = ft_atoi(argv[1]);
	if (a < 0)
	{
		ft_putchar('-');
		a *= -1;
	}
	ft_putchar(a + '0');
	return (0);
}
