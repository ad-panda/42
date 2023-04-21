#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *str;
    char    *s1;
    int i;

    i = 0;
    s1 = (char *)s;
    if ((str = malloc(sizeof(char) * (ft_strlen(s1) + 1))) == NULL)
        return (NULL);
    while (s1[i])
    {
        str[i] = f(i,s1[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}