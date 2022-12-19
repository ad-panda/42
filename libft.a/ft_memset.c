#include <unistd.h>

void	*memset(void *str, int c, int len)
{
	str[len] = c + '0';
	return (str)
}
