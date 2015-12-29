/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 20:40:03 by vthomas           #+#    #+#             */
/*   Updated: 2015/12/29 17:20:06 by vthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t index;

	index = ft_strlen(s) + 1;
	while (index != 0 && s[index] != (char)c)
		index--;
	if (s[index] == c)
		return ((char *)s + index);
	return (0);
}
