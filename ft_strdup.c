#include "libft.h"

char	*ft_strdup(const char *c)
{
	void	*dst;

	dst = malloc(ft_strlen(c) + 1);
	if (!(dst))
		return (NULL);
	return ((char *)ft_memcpy(dst, c, ft_strlen(c)));
}
