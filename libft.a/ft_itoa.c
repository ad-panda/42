/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <asimoes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:41:53 by asimoes-          #+#    #+#             */
/*   Updated: 2023/04/21 00:44:27 by asimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_len_n(int n)
{
    int i;

    i = 1;
    if (n == -2147483648)
    {
        i = 11;
        return (i);
    }
    if (n < 0)
    {
        n = n * (-1);
        i ++;
    }
    while (n >= 10)
    {
        n = n / 10;
        i++;
    }
    return (i);
}

char    *ft_itoa(int n)
{
    char    *str;
    int len;

    len = ft_len_n(n);  
    if ((str = malloc((len + 1) * sizeof(char))) == NULL)
        return (NULL);
    str[len--] = '\0';
    if (n < 0)
    {
        str[0] = '-';
        while (len > 0)
        {
            str[len--] = ((n % 10) * (-1)) + '0';
            n = n / 10;
        }
    }
    else while (len >= 0)
        {
            str[len--] = (n % 10) + '0';
            n = n / 10;
        }
    return (str);
}