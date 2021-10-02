/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 20:20:34 by ftan              #+#    #+#             */
/*   Updated: 2021/10/02 20:20:35 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dsize;

	i = 0;
	dsize = ft_strlen(dest);
	if (size > dsize)
	{
		while (dsize + i < size - 1 && src[i])
		{
			dest[dsize + i] = src[i];
			i++;
		}
		dest[dsize + i] = '\0';
		return (dsize + ft_strlen(src));
	}
	return (size + ft_strlen(src));
}
