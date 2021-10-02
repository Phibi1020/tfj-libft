/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 20:17:31 by ftan              #+#    #+#             */
/*   Updated: 2021/10/02 20:17:34 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
