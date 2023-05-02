#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t    i;
    size_t    l;
    char    *str;

    if (!s1 && !set)
        return (NULL);
    i = 0;
    l = ft_strlen(s1);
    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    if (i == l)
    {
          if (!(str = ft_strdup("")))
            return (NULL);
        else
            return (str);
    }
    while (s1[l - 1] && ft_strchr(set, s1[l - 1]) && l > i)
        l--;
    str = (char *)malloc(sizeof(char) * (l - i + 1));
    if (!str)
        return (NULL);
    ft_strlcpy(str, &s1[i], l - i + 1);
    return (str);
}