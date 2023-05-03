/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <asimoes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 22:19:46 by asimoes-          #+#    #+#             */
/*   Updated: 2023/05/03 01:18:31 by asimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char *str, char charset)
{
	int	i;
	int	word_count;

	word_count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == charset)
			i++;
		if (str[i] != '\0')
			word_count++;
		while (str[i] != '\0' && str[i] != charset)
			i++;
	}
	return (word_count);
}

static char	*ft_word(char *str, char charset)
{
	int		len_word;
	int		i;
	int		j;
	char	*word;

	i = 0;
	j = 0;
	while (str[j] != '\0' && str[j] != charset)
		j++;
	len_word = j;
	word = (char *)malloc(len_word + 1);
	if (!word)
		return (NULL);
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_free_tab(char **strings)
{
	size_t	i;

	i = 0;
	while (strings[i])
	{
		free(strings[i]);
		i++;
	}
	free(strings);
}

static char	**ft_allocation(char const *s, char c)
{
	char	**str;

	str = (char **)malloc(sizeof(char *) * (ft_word_count((char *)s, c)
				+ 1));
	if (!s || !str)
		return (NULL);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;
	int		j;

	i = 0;
	j = 0;
	strings = ft_allocation(s, c);
	if (strings == NULL)
		return (NULL);
	while (s[j] != '\0')
	{
		while (s[j] == c)
			j++;
		if (s[j] != '\0')
		{
			strings[i] = ft_word((char *)&s[j], c);
			if (!strings[i])
				return (ft_free_tab(strings), NULL);
			i++;
		}
		while (s[j] != '\0' && s[j] != c)
			j++;
	}
	strings[i] = 0;
	return (strings);
}
