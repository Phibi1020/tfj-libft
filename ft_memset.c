/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 20:22:31 by ftan              #+#    #+#             */
/*   Updated: 2021/10/02 20:22:33 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	iter;

	if (!n)
		return (0);
	iter = -1;
	while (++iter < n)
	{
		((unsigned char *)str)[iter] = c;
	}
	return (str);
}
