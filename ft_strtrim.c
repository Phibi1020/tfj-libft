#include "libft.h"

// https://github.com/hidaehyunlee/Libft/blob/master/ft_strtrim.c
int	ft_getstart(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (!(strchr(set, s1[i])))
			break ;
		i++;
	}
	return (i);
}

int	ft_getend(const char *s1, const char *set)
{
	size_t	len;

	len = ft_strlen(s1);
	while (len > 0)
	{
		if (!(strchr(set, s1[len])))
			break ;
		len--;
	}
	return (len);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		str = strdup(s1);
	start = ft_getstart(s1, set);
	end = ft_getend(s1, set);
	if (start >= end)
	{
		str = (char *)malloc(sizeof(s1) * (1));
		ft_strlcpy(str, "", 1);
	}
	else
	{
		str = (char *)malloc(sizeof(s1) * (end - start + 1));
		ft_strlcpy(str, s1 + start, end - start + 1);
	}
	return (str);
}
