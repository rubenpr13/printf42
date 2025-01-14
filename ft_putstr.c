/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 17:33:20 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/07/27 17:33:20 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	size_t	i;
	int		wrt;

	i = 0;
	if (!str)
	{
		if (write(1, "(null)", 6) != 6)
			return (-1);
		return (6);
	}
	while (str[i])
	{
		wrt = write(1, &str[i], 1);
		if (wrt != 1)
			return (-1);
		i++;
	}
	return (i);
}
