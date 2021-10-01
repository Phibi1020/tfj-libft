#include "libft.h"

static void	to_num(long n, char *str, int *i)
{
	if (n > 9)
	{
		to_num(n / 10, str, i);
		to_num(n % 10, str, i);
	}
	else
		str[(*i)++] = n + '0';
}

static int	num_len(int n)
{
	int	size;

	size = 0;
	if (n < 0)
		size++;
	while (n / 10 != 0)
	{
		n = n / 10;
		size++;
	}
	size++;
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		i;

	nbr = n;
	str = (char *)malloc(sizeof(char) * (num_len(n) + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		str[i++] = '-';
		nbr *= -1;
	}
	to_num(nbr, str, &i);
	str[i] = '\0';
	return (str);
}
