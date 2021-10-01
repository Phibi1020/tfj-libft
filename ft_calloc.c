#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*dst;

	dst = malloc(sizeof(num) * size);
	if (!dst)
		return (0);
	ft_bzero(dst, num * size);
	return (dst);
}
