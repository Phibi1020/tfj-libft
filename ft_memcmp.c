/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 20:22:54 by ftan              #+#    #+#             */
/*   Updated: 2021/10/02 20:22:55 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	size_t	iter;

	iter = -1;
	while (++iter < n)
	{
		if (((unsigned char *)s1)[iter] != ((unsigned char *)s2)[iter])
			return (((unsigned char *)s1)[iter] - ((unsigned char *)s2)[iter]);
	}
	return (0);
}
