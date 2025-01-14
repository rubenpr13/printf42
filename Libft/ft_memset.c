/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:44:59 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/04/19 12:15:12 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp_b;

	temp_b = (unsigned char *) b;
	while (len > 0)
	{
		*(temp_b++) = (unsigned char) c;
		len--;
	}
	return (b);
}
