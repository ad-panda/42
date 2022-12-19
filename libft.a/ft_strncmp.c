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

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;
	int	nb;
	int	len;
	int	len2;

	i = 0;
	nb = 0;
	len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	while((i < len) & (i < len2) & (i < n))
	{
		if (s1[i] < s2[i])
			return (2);
		else if (s1[i] > s2[i])
			return (1);
		else if (s1[i] == s2[i])
			i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	n;
	int	nb;

	n = argv[3][0] - '0';
	nb = ft_strncmp(argv[1], argv[2], n);
	ft_putchar(nb + '0');

	return (0);
}
