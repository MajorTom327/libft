/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 02:12:52 by vthomas           #+#    #+#             */
/*   Updated: 2016/01/12 15:39:21 by vthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp_src;
	unsigned char	*tmp_dst;

	tmp_src = (unsigned char *)src;
	tmp_dst = (unsigned char *)dst;
	if (n == 0)
		return (dst);
	if (dst > src)
	{
		i = n - 1;
		while (i != 0)
		{
			tmp_dst[i] = tmp_src[i];
			i--;
		}
		tmp_dst[i] = tmp_src[i];
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
