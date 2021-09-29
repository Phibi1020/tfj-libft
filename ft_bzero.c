#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	iter;

	if (!n)
		return ;
	iter = -1;
	while (++iter < n)
	{
		((unsigned char *)str)[iter] = 0;
	}
}
