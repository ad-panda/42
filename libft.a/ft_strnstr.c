#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;
    size_t  i1;
    size_t ln;
    char    *strh;

    i = 0;
    j = 0;
    ln = ft_strlen((char *)needle);
    strh = (char *)haystack;
    if (needle[i] == '\0')
    return (strh + i);
    while (haystack[i] && i < len)
    {
        if (haystack[i] == '\0')
            return (NULL);
        if (haystack[i] == needle[j])
        {
          i1 = i;
          while (haystack[i] == needle[j] && j < ln && i < len)
          {
            if (haystack[i] == '\0')
            return (NULL);
            i++;
            j++;
          }
          if (j == ln)
          return (strh + i1);
          else
            {
            i = i1;
            j = 0;
            }
        }
        i++;
    }
    return (NULL);
}