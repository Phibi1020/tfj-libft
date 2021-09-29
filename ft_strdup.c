#include "libft.h"

char	*ft_strdup(const char *c)
{
	char	*dst;
	int		i;

	dst = (char *)malloc(sizeof(c) * (ft_strlen(c) + 1));
	if (!(dst))
		return (NULL);
	i = 0;
	while (c[i])
	{
		dst[i] = c[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
