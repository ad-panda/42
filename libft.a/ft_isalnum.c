#include "libft.h"


int	ft_isalnum(int c)
{
	if ((('A' <= c) && (c <= 'Z')) || (('a' <= c) && (c <= 'z')))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else return (0);
}

