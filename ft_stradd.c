/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 20:32:11 by vthomas           #+#    #+#             */
/*   Updated: 2016/08/18 19:50:05 by vthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_intcpy(int *dst, int *src, size_t l)
{
	const size_t l_save = l;

	while (l > 0)
	{
		*dst = *src;
		src++;
		dst++;
		l--;
	}
	dst -= l_save;
}

void	ft_stradd(char **dst, const char *src)
{
	char	*tmp;
	size_t	len;

	tmp = ft_strnew(ft_strlen(*dst) + ft_strlen(src));
	len = ft_strlen(*dst);
	ft_strcat(tmp, *dst);
	ft_strcat(tmp + len, src);
	ft_strdel(dst);
	*dst = tmp;
}
