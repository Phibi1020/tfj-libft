#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	size_t	iter;

	iter = -1;
	while (++iter < n)
	{
		if (((unsigned char *)s1)[iter] != ((unsigned char *)s2)[iter])
			return (((unsigned char *)s1)[iter] - ((unsigned char *)s2)[iter]);
	}
	return (0);
}
