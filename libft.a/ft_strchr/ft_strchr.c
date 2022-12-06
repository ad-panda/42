#include <unistd.h>


char	*strchr(const char *s, int c)
{
	int	i;
	char C;
	char *n = NULL;

	i = 0;
	C = c + '0';
	while (s[i])
	{
	if (s[i] == C)
		return (*s[i])
	else 
		i++;
	}
	return (*n);
}
