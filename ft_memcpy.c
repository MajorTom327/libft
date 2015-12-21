/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 01:38:25 by vthomas           #+#    #+#             */
/*   Updated: 2015/12/20 19:20:06 by vthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*dst_tmp;
	unsigned char	*src_tmp;

	index = 0;
	dst_tmp = (unsigned char *)dst;
	src_tmp = (unsigned char *)src;
	while (index != n)
	{
		dst_tmp[index] = src_tmp[index];
		index++;
	}
	return (dst);
}
