/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 02:12:52 by vthomas           #+#    #+#             */
/*   Updated: 2016/01/11 20:48:51 by vthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	unsigned char	*tmp;

	tmp_src = (unsigned char *)src;
	tmp_dst = (unsigned char *)dst;
	tmp = (unsigned char *)ft_memalloc(n);
	if (tmp == NULL)
		return (NULL);
	ft_memcpy((void *)tmp, src, n);
	index = 0;
	while (index < n)
	{
		tmp_dst[index] = tmp[index];
		index++;
	}
	return (dst);
}
