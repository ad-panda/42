/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 06:04:25 by asimoes-          #+#    #+#             */
/*   Updated: 2022/07/21 06:31:42 by asimoes-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		tab = NULL;
		return (0);
	}
	if (!(tab = malloc(sizeof(*tab) * size)))
		return (-1);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
