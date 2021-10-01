#include "libft.h"

static int	get_wc(const char *s, int c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static int	get_len(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static void	*leak(char **final, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(final[i]);
		i++;
	}
	free(final);
	return (NULL);
}

static void	fill(const char *s, int words, char c, char **final)
{
	int	i;
	int	j;
	int	len;

	i = -1;
	while (++i < words)
	{
		while (*s == c)
			s++;
		len = get_len(s, c);
		final[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!final[i])
			leak(final, i);
		j = 0;
		while (j < len)
			final[i][j++] = *s++;
		final[i][j] = '\0';
	}
	final[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	int		words;

	if (!s)
		return (NULL);
	words = get_wc(s, c);
	final = (char **)malloc(sizeof(char *) * (words + 1));
	if (!(final))
		return (NULL);
	fill(s, words, c, final);
	return (final);
}
