#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*l;

	i = 0;
	l = NULL;
	while (str[i])
	{
		if (str[i] == (char)c)
			l = (char *)&str[i];
		i++;
	}
	if (str[i] == (char)c)
		l = ((char *)&str[i]);
	return (l);
}
