/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:45:09 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/04/19 13:43:07 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char			mod_c;
	unsigned int	i;

	mod_c = (char) c;
	i = 0;
	while (s[i] != '\0')
	{
		if (mod_c == s[i])
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	if (mod_c == s[i])
	{
		return ((char *) &s[i]);
	}
	return (0);
}
