#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (ft_strlen(s) > start)
	{
		str = (char *)malloc(sizeof(s) * (len + 1));
		i = 0;
		while (s[start] && i < len)
		{
			str[i] = s[start + i];
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);
}
