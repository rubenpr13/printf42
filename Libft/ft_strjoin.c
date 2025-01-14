/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:46:41 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/04/23 13:01:54 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	char			*t;
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	t = (char *)malloc((ft_strlen(str1) + ft_strlen(str2) * sizeof(char)) + 1);
	if (!t)
		return (NULL);
	while (str1[i])
	{
		t[i] = str1[i];
		i++;
	}
	while (str2[j])
	{
		t[i + j] = str2[j];
		j++;
	}
	t[i + j] = 0;
	return (t);
}
