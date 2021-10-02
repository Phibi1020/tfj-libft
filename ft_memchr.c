/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 20:22:59 by ftan              #+#    #+#             */
/*   Updated: 2021/10/02 20:23:01 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t	iter;

	iter = -1;
	while (++iter < n)
	{
		if (((unsigned char)c) == ((unsigned char *)s)[iter])
			return (((unsigned char *)s) + iter);
	}
	return (NULL);
}
