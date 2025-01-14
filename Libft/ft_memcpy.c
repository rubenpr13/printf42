/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:44:45 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/04/19 13:30:55 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;
	size_t			i;

	if (src == (void *)0 && dst == (void *)0)
		return (dst);
	temp_dst = (unsigned char *) dst;
	temp_src = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		temp_dst[i] = temp_src[i];
		i++;
	}
	return (dst);
}
