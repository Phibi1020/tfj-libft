#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * n);
	if (tmp == NULL)
		return (NULL);
	memcpy(tmp, src, n);
	memcpy(dest, tmp, n);
	free(tmp);
	return (dest);
}
