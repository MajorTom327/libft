/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 19:57:11 by vthomas           #+#    #+#             */
/*   Updated: 2016/01/11 23:05:03 by vthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	ft_print_nb(int n, int fd, int pow)
{
	while (pow >= 0 && fd)
	{
		ft_putchar_fd(n / ft_pow(10, pow) + '0', fd);
		n = n % ft_pow(10, pow);
		pow--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int tmp;
	int tmp_pow;
	int total_pow;

	tmp = 0;
	tmp_pow = ft_tpow(n);
	total_pow = -1;
	ft_print_nb(n, fd, ft_tpow(n) - 1);
}
