/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:18:23 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/06/25 17:41:58 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*conv(long len);
static long	length(long nbr);

char	*ft_itoa(int n)
{
	long	len;
	char	*result;
	long	nbr;

	nbr = n;
	len = length(nbr);
	result = conv(len);
	if (!result)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	result[len] = '\0';
	len--;
	while (nbr != 0)
	{
		result[len] = (char)(((nbr % 10) + 48));
		nbr = nbr / 10;
		len--;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}

static char	*conv(long len)
{
	char	*temp;

	temp = malloc((len + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	temp[0] = '0';
	return (temp);
}

static long	length(long nbr)
{
	long	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}
/*
int main ()
{
	char *num = ft_itoa(-4);
	printf("El número es %s", num);
	return (0);
}*/
