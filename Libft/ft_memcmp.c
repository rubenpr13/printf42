/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:44:24 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/04/19 14:09:36 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*mod_s1;
	unsigned char	*mod_s2;
	size_t			i;

	mod_s1 = (unsigned char *) s1;
	mod_s2 = (unsigned char *) s2;
	i = 0;
	while (n > i)
	{
		if (mod_s1[i] != mod_s2[i])
			return (mod_s1[i] - mod_s2[i]);
		i++;
	}
	return (0);
}
