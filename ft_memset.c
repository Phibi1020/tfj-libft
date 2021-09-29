#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	iter;

	if (!n)
		return (0);
	iter = -1;
	while (++iter < n)
	{
		((unsigned char *)str)[iter] = c;
	}
	return (str);
}
