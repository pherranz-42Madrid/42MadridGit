/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pherranz <pherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 13:55:08 by pmedina-          #+#    #+#             */
/*   Updated: 2021/04/15 17:37:06 by pherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_intlen(long num)
{
	size_t c;

	c = 0;
	if (num == 0)
	{
		c++;
		return (c);
	}
	if (num < 0)
	{
		num *= -1;
		c++;
	}
	while (num > 0)
	{
		num = num / 10;
		c++;
	}
	return (c);
}
