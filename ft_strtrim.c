/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 20:17:49 by ftan              #+#    #+#             */
/*   Updated: 2021/10/02 20:17:51 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	found(const char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		len;
	int		i;
	char	*str;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && found(s1[start], set))
		start ++;
	len = ft_strlen(s1);
	while (len > start && found(s1[len - 1], set))
		len --;
	str = (char *)malloc(sizeof(*s1) * (len - start + 1));
	i = 0;
	while (start < len)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
