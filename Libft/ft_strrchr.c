/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:46:32 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/04/19 14:16:08 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			mod_c;
	char			*res;
	unsigned int	i;

	mod_c = (char) c;
	res = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (mod_c == s[i])
			res = ((char *) &s[i]);
		i++;
	}
	if (s[i] == mod_c)
		res = ((char *) &s[i]);
	return (res);
}
