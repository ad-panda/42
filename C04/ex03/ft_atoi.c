/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 23:30:17 by asimoes-          #+#    #+#             */
/*   Updated: 2022/07/19 08:47:21 by asimoes-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	nb;

	nb = 0;
	negative = 1;
	i = 0;
	while (str[i] >= 8 && str[i] <= 12 || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == '-')
			negative *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += (str[i] - '0');
		i++;
	}
	return (nb * negative);
}
