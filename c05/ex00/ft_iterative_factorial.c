/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:56:28 by asimoes-          #+#    #+#             */
/*   Updated: 2022/07/28 13:38:40 by asimoes-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	long int	fact;
	long int	i;

	fact = 1;
	i = nb;
	if (nb < 0 || nb > 12)
		return (0);
	while (i > 0)
	{
		fact *= nb;
		nb -= 1;
		i--;
	}
	return (fact);
}
