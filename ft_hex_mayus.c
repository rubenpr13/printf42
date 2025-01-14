/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_mayus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 22:20:41 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/07/27 22:20:41 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hex_long(char *bstr, unsigned long long n, int i);
static int	ft_hex_unsign(char *bstr, unsigned int n, int i);

int	ft_hex_mayus(int n)
{
	int	i;

	i = 0;
	if (n >= 0)
	{
		i = ft_hex_long("0123456789ABCDEF", n, i);
	}
	else if (n < 0)
	{
		i = ft_hex_unsign("0123456789ABCDEF", n, i);
	}
	return (i);
}

static int	ft_hex_long(char *bstr, unsigned long long n, int i)
{
	unsigned long long	len;

	len = ft_strlen(bstr);
	if (n >= len)
	{
		i = ft_hex_long(bstr, n / len, i);
		if (i == -1)
			return (-1);
		if (write(1, &bstr[n % len], 1) == -1)
			return (-1);
		i++;
	}
	else if (n < len)
	{
		if (write(1, &bstr[n], 1) == -1)
			return (-1);
		i++;
	}
	return (i);
}

static int	ft_hex_unsign(char *bstr, unsigned int n, int i)
{
	unsigned int	len;

	len = ft_strlen(bstr);
	if (n >= len)
	{
		i = ft_hex_unsign(bstr, n / len, i);
		if (i == -1)
			return (-1);
		if (write(1, &bstr[n % len], 1) == -1)
			return (-1);
		i++;
	}
	else if (n < len)
	{
		if (write(1, &bstr[n], 1) == -1)
			return (-1);
		i++;
	}
	return (i);
}
