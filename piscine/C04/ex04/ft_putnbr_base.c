/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:49:18 by asimoes-          #+#    #+#             */
/*   Updated: 2022/07/27 14:11:34 by asimoes-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_error(int len, char *base)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (len == 0 || len == 1)
		return (1);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len;
	long int	n;

	n = (long int)nbr;
	len = ft_strlen(base);
	if (ft_error(len, base) == 1)
		return ;
	if (n >= 0 && n < len)
		ft_putchar(base[n]);
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr_base((n * (-1)), base);
	}
	else if (n >= len)
	{
		ft_putnbr_base((n / len), base);
		ft_putnbr_base((n % len), base);
	}
}
