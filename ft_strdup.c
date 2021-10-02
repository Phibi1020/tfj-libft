/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftan <ftan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 20:20:56 by ftan              #+#    #+#             */
/*   Updated: 2021/10/02 20:20:57 by ftan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *c)
{
	void	*dst;

	dst = malloc(ft_strlen(c) + 1);
	if (!(dst))
		return (NULL);
	return ((char *)ft_memcpy(dst, c, ft_strlen(c) + 1));
}
