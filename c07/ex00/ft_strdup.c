/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 08:42:54 by asimoes-          #+#    #+#             */
/*   Updated: 2022/07/20 10:10:52 by asimoes-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	*malloc1(int size)
{
	int	*tab;

	tab = malloc(sizeof(*tab) * size);
	return (tab);
}

char	*ft_strcpy()
{

}

char	*ft_strdup(char *src)
{
	int	*cpy;
	int	size;

	size = ft_strlen(src);
	cpy = malloc1(size);
	ft_strcpy(cpy, src);
	return (cpy);
}
