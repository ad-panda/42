/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:29:19 by asimoes-          #+#    #+#             */
/*   Updated: 2022/07/28 16:55:43 by asimoes-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nbp;

	nbp = 1;
	i = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i < power)
	{
		nbp *= nb;
		i++;
	}
	return (nbp);
}
