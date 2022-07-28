/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:11:36 by asimoes-          #+#    #+#             */
/*   Updated: 2022/07/28 17:47:33 by asimoes-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i < nb - 1 && nb % i != 0 && i < 46340)
	{
		i++;
	}
	if (nb % i == 0)
		return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	if (ft_is_prime(nb + 1) == 1)
		return (nb);
	return (nb);
}
