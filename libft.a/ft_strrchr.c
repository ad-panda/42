#include "libft.h"

char    *strrchr(const char *s, int c)
{
        cha	C;
        char	*n = NULL;
	int	len;

	len = ft_strlen(s);
        C = c + '0';
        while (len >= 0)
        {
        if (s[len] == C) 
                return (*s[len])
        else    
                len--;
        }
        return (n);
}
~             
