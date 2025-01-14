/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:32:05 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/07/27 18:32:05 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	conv_to_hex(char *bstr, unsigned long long b, int c);

int	ft_hexpoint(void *p)
{
	unsigned long long	pointer;
	int					i;

	i = 0;
	pointer = (unsigned long long) p;
	if (write(1, "0x", 2) != 2)
		return (-1);
	i = conv_to_hex("0123456789abcdef", pointer, i);
	if (i == -1)
		return (-1);
	i += 2;
	return (i);
}

static int	conv_to_hex(char *bstr, unsigned long long n, int c)
{
	unsigned long long	len;

	len = ft_strlen(bstr);
	if (n >= len)
	{
		c = conv_to_hex(bstr, n / len, c);
		if (c == -1)
			return (-1);
		if (write(1, &bstr[n % len], 1) == -1)
			return (-1);
		c++;
	}
	else if (n < len)
	{
		if (write(1, &bstr[n], 1) == -1)
			return (-1);
		c++;
	}
	return (c);
}
