/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:26:20 by asimoes-          #+#    #+#             */
/*   Updated: 2022/07/24 13:31:45 by asimoes-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 24;
}

int	main(void)
{
	t_point	point;

	set_point(&point);
	return (0);
}
