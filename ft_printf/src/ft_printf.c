/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes- <asimoes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 20:24:18 by asimoes-          #+#    #+#             */
/*   Updated: 2023/06/10 00:57:31 by asimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_printf(const char *str, ...)
{
    va_list ap;
    va_start(ap, str);
    int lenght_str;
    
    if ( == "%")
    {
        if( + 1 == "c")
            ft_putchar();
        if( + 1 == "s")
            ft_putstr();
        if( + 1 == "d")
            ft_putdecimal();
        if( + 1 == "x")

        if( + 1 == "i")
              
    }
    va_end(ap);
    return (lenght_str);
}