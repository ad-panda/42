/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <asimoes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:41:53 by asimoes-          #+#    #+#             */
/*   Updated: 2023/05/03 12:38:37 by asimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_size(long n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		size++;
		n = -1 * n;
	}
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static char	*ft_is_zero(void)
{
	char	*r_string;

	r_string = (char *) malloc (sizeof(char) * 2);
	if (!r_string)
		return (NULL);
	r_string[0] = '0';
	r_string[1] = '\0';
	return (r_string);
}

static char	*ft_itoa_main(int n, char *r_string, long n_long, int nb_len)
{
	int	is_neg;

	is_neg = 0;
	if ((long)n < 0)
	{
		n_long = -1 * n_long;
		is_neg = 1;
	}
	r_string[nb_len] = '\0';
	nb_len--;
	while (nb_len >= 0)
	{
		r_string[nb_len] = n_long % 10 + '0';
		n_long = n_long / 10;
		nb_len--;
	}
	if (is_neg)
		r_string[0] = '-';
	return (r_string);
}

char	*ft_itoa(int n)
{
	char	*r_string;
	int		nb_len;
	long	n_long;

	n_long = (long)n;
	nb_len = int_size(n_long);
	if (n == 0)
		return (ft_is_zero());
	r_string = (char *) malloc (nb_len * sizeof(char) + 1);
	if (!r_string)
		return (NULL);
	r_string = ft_itoa_main(n, r_string, n_long, nb_len);
	return (r_string);
}
