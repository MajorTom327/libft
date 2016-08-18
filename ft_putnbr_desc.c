/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_desc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 16:05:42 by vthomas           #+#    #+#             */
/*   Updated: 2016/08/18 15:56:35 by vthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_desc(const char *desc, int nb)
{
	ft_putstr(desc);
	ft_putstr(":\t");
	ft_putnbr_endl(nb);
}
