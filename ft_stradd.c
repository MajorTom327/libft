/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 20:32:11 by vthomas           #+#    #+#             */
/*   Updated: 2016/08/18 17:52:16 by vthomas          ###   ########.fr       */
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
	len = ft_strlen(*dst) / sizeof(int);
	if (len > sizeof(int))
		ft_intcpy((int *)tmp, (int *)*dst, len);
	else
		len = 0;
	ft_strcat(tmp, (*dst + (len * sizeof(int))));
	ft_strcat(tmp, src);
	ft_putstr_fd("\e[31mNow it's time to error...\e[0m\n", 2);
	if (*dst == NULL)
		ft_putstr_fd("\e[36mNULL\e[0m\n", 2);
	else
		ft_putstr_fd("\e[36mNOT NULL\e[0m\n", 2);
	ft_strdel(dst);
	ft_putstr_fd("\e[32mDid I haved any error ?\e[0m\n", 2);
	*dst = tmp;
	ft_putstr_fd("\e[33mMaybe not this time !\e[0m\n", 2);
}
