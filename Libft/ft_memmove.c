/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:40:55 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/04/19 13:59:39 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp_src;
	unsigned char	*temp_dst;
	size_t			i;

	temp_src = (unsigned char *)src;
	temp_dst = (unsigned char *)dst;
	i = 0;
	if (dst == (void *)0 && src == (void *)0)
		return (0);
	if (temp_dst > temp_src)
	{
		while (len-- > 0)
		{
			temp_dst[len] = temp_src[len];
		}
	}
	else
	{
		while (i < len)
		{
			temp_dst[i] = temp_src[i];
			i++;
		}
	}
	return (dst);
}
