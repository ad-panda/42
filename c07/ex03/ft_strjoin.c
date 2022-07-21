/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 06:33:53 by asimoes-          #+#    #+#             */
/*   Updated: 2022/07/21 14:16:04 by asimoes-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *dest)
{
	int	i;

	while (dest[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dlen;

	i = 0;
	dlen = ft_strlen(dest);
	while (src[i])
	{
		dest[dlen + i] = src[i];
		i++;
	}
	if ()
	dest[dlen + i] = ' ';
	return (dest);
}

 char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
i
	tab = malloc(sizeof(*tab) * 0);
	if (size = 0)
		return (tab);
	while (strs[i])
	{
		ft_strcat(sep, strs[i]);
		i++;
	}
	return (sep);
}
