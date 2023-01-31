#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;

	tab = malloc(count * size);
	if (tab == NULL)
		return (tab);
	ft_bzero(tab, count * size);
	return (tab);
}