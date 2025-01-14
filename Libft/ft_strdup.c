/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:11:41 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/04/22 17:22:33 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned char	*s1_copy;
	unsigned int	i;

	s1_copy = malloc(ft_strlen(s1) + 1);
	i = 0;
	if (!s1_copy)
		return (0);
	while (s1[i] != '\0')
	{
		s1_copy[i] = s1[i];
		i++;
	}
	s1_copy[i] = 0;
	return ((char *)s1_copy);
}
