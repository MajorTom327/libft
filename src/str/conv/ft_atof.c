/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vthomas <vthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 19:41:40 by vthomas           #+#    #+#             */
/*   Updated: 2017/05/16 19:53:46 by vthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

float	ft_atof(char *str)
{
	char	*dot;
	int		ent;
	int		dec;
	float	ret;

	dot = ft_strchr(str, '.');
	if (dot == NULL)
		return ((float)ft_atoi(str));
	ent = ft_atoi(str);
	dec = ft_atoi(&dot[1]);
	ret = (float)ent;
	ret += (float)dec / (float)ft_pow(10, ft_tpow(dec));
	printf("%d.%d %f\n", ent, dec, ret);
	return (ret);
}
