/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 20:22:48 by ftan              #+#    #+#             */
/*   Updated: 2021/10/02 20:22:49 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, char const *src, size_t n)
{
	size_t	iter;

	iter = -1;
	while (++iter < n)
		((unsigned char *)dst)[iter] = ((unsigned char *)src)[iter];
	return (dst);
}
