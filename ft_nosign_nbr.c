/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nosign_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:17:17 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/07/27 18:17:17 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nosign_nbr(unsigned int num)
{
	int	res;

	res = 0;
	if (num > 9)
	{
		res = ft_nosign_nbr(num / 10);
		if (res == -1)
			return (-1);
		num = num % 10;
	}
	if (num <= 9)
	{
		if (ft_putchar('0' + num) == -1)
			return (-1);
		res++;
	}
	return (res);
}
