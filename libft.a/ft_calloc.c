#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	void	*tab;

	tab = (void *)malloc(count * size);
	if (tab = NULL)
		return (NULL);
	ft_bzero(tab, count);
	return (tab);
}
