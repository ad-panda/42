/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 05:23:56 by asimoes-          #+#    #+#             */
/*   Updated: 2022/07/21 06:33:02 by asimoes-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(*tab) * size);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
