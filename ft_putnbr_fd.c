/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 19:57:11 by vthomas           #+#    #+#             */
/*   Updated: 2016/01/11 22:55:59 by vthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	ft_print_nb(int n, int fd, int pow)
{
	if (fd)
		printf("%d\t%d\n", pow, n);
	while (pow >= 0)
	{
		ft_putchar('[');
		ft_putchar(n / ft_pow(10, pow));
		ft_putchar(']');
		n = n % ft_pow(10, pow);
		pow--;
	}
	printf("%d\t%d", pow, n);
}

void	ft_putnbr_fd(int n, int fd)
{
	int tmp;
	int tmp_pow;
	int total_pow;

	tmp = 0;
	tmp_pow = ft_tpow(n);
	total_pow = -1;
	while (n != 0)
	{
		tmp += n / ft_pow(10, tmp_pow) * ft_pow(10, total_pow);;
		printf("%d\t", n);
		n -= ((n / ft_pow(10, tmp_pow)) * ft_pow(10, tmp_pow));
		printf("%d\t%d\n", n, tmp);
		total_pow++;
		tmp_pow--;
	}
	if (fd)
		printf("FINAL: %d\n", tmp);
	ft_print_nb(tmp, fd, total_pow--);
}
