/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:48:48 by asimoes-          #+#    #+#             */
/*   Updated: 2022/07/14 18:39:37 by asimoes-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& ((str[i - 1] < '0' || (str[i - 1] > '9' && str[i - 1] < 'A')
					|| (str[i - 1] > 'Z' && str[i - 1] < 'a')
					|| str[i - 1] > 'z')))
		{
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
