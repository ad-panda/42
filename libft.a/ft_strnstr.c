#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    int ln;
    char    *strh;
    //char    *strn;

    i = 0;
    ln = ft_strlen((char *)needle);
    strh = (char *)haystack;
    //strn = (char *)needle;
    while (haystack[i] && i < len)
    {
        if (haystack[i] == '\0')
            return (NULL);
        if (haystack[i] == needle[ln])
            return (strh + i);
        i++;
    }
    return (NULL);
}