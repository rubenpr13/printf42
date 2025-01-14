/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 13:08:04 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/07/27 13:08:04 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	print_str(const char *str, va_list arguments, int count);
static int	print_percent(char str, va_list arguments);
static int	search_type(char f, va_list arguments);

static int	print_percent(char str, va_list arguments)
{
	int	let;

	let = 0;
	if (str != '%')
	{
		let = search_type(str, arguments);
		if (let == -1)
			return (-1);
		return (let);
	}
	else
	{
		if (write (1, &str, 1) != 1)
			return (-1);
		return (1);
	}
}

static	int	print_str(const char *str, va_list arguments, int let)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			let = let + print_percent(str[i + 1], arguments);
			if (let == -1)
				return (-1);
			i++;
		}
		else
		{
			if (write (1, &str[i], 1) != 1)
				return (-1);
			let++;
		}
		i++;
	}
	return (let);
}

int	ft_printf(const char *str, ...)
{
	va_list	arguments;
	int		let;

	let = 0;
	va_start(arguments, str);
	let = print_str(str, arguments, let);
	va_end(arguments);
	return (let);
}

static int	search_type(char f, va_list arguments)
{
	if (f == 'c')
		return (ft_putchar(va_arg(arguments, int)));
	if (f == 's')
		return (ft_putstr(va_arg(arguments, char *)));
	if (f == 'p')
		return (ft_hexpoint(va_arg(arguments, void *)));
	if (f == 'd' || f == 'i' )
		return (ft_putnbr(va_arg(arguments, int)));
	if (f == 'u')
		return (ft_nosign_nbr(va_arg(arguments, unsigned int)));
	if (f == 'x')
		return (ft_hex_minus(va_arg(arguments, int)));
	if (f == 'X')
		return (ft_hex_mayus(va_arg(arguments, int)));
	return (0);
}
