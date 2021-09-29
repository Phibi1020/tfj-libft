#include "libft.h"

void	*ft_memcpy(void *dst, char const *src, size_t n)
{
	size_t	iter;

	iter = -1;
	while (++iter < n)
		((unsigned char *)dst)[iter] = ((unsigned char *)src)[iter];
	return (dst);
}
