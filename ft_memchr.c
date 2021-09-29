#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t	iter;

	iter = -1;
	while (++iter < n)
	{
		if (((unsigned char)c) == ((unsigned char *)s)[iter])
			return (((unsigned char *)s) + iter);
	}
	return (NULL);
}
