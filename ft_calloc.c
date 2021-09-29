#include "libft.h"

// reference from http://git.innovationacademy.kr
// /junyun/Libft/src/branch/master/ft_calloc.c
void	*ft_calloc(size_t num, size_t size)
{
	char	*dst;

	dst = malloc(sizeof(num) * size);
	if (!dst)
		return (0);
	memset(dst, 0, num * size);
	return (dst);
}
