/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:44:07 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/04/19 13:44:16 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	mod_c;
	char	*mod_s;
	size_t	i;

	mod_c = (char) c;
	mod_s = (char *) s;
	i = 0;
	while (i < n)
	{
		if (mod_c == mod_s[i])
			return ((void *) &mod_s[i]);
		i++;
	}
	return (0);
}
