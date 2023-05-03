/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <asimoes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 00:20:01 by asimoes-          #+#    #+#             */
/*   Updated: 2023/05/03 00:20:45 by asimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr2(int n, int fd)
{
	int	nb;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n == 0)
		return ;
	ft_putnbr2(n / 10, fd);
	nb = (n % 10) + '0';
	write(fd, &nb, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		n = n + '0';
		write(fd, &n, 1);
	}
	else
		ft_putnbr2(n, fd);
}
