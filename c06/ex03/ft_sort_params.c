/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 06:59:45 by asimoes-          #+#    #+#             */
/*   Updated: 2022/07/20 08:33:49 by asimoes-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] && s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int	i;
	int	find;
	char	tmp;

	find = 1;
	while (find)
	{
		find = 0;
		i = 1;
		while (i++ < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1] > 0))
			{
				tmp = argv[i];
				argv[i] = argv[i = 1];
				argv[i + 1] = tmp;
				find = 1;
			}
		}
		i = 1;
		while (i++ < argc)
			ft_putstr(argv[i]);
		ft_putchar('\n');
		return (0);
	}
	return (0);
}
