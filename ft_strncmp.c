#include "libft.h"

// referenced from http://git.innovationacademy.kr/
// hyunwlee/Libft/src/branch/master/ft_strncmp.c?lang=en-US
int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
	size_t	i;

	i = 0;
	while (str1[i] == str2[i] && i < len)
	{
		i++;
		if ((str1[i] == '\0' && str2[i] == '\0') || i == len)
			return (0);
	}
	if (i == len)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
