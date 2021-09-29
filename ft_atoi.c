#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	sign;
	size_t	sum;

	sign = 1;
	sum = 0;
	i = 0;
	if (str[i] == 0)
		return (0);
	while (str[i] && (str[i] == '\f' || str[i] == '\t' || str[i] == ' '
			|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = sum * 10 + str[i] - '0';
		i++;
	}
	return (sign * sum);
}
