/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:55:49 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/06/26 14:41:25 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *s, int c);
static int	ft_wordlen(char const *s, char c);
static void	*ft_free(char **matrix, int words);
static char	**ft_fill(char const *s, int words, char c, char **matrix);

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		words;

	if (!s)
		return (NULL);
	words = ft_countwords(s, c);
	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	matrix = ft_fill(s, words, c, matrix);
	return (matrix);
}

static int	ft_countwords(const char *s, int c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (s == NULL || s[0] == '\0')
		return (0);
	if (s[0] != c)
		words++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] && s[i + 1] != c)
			words++;
		i++;
	}
	return (words);
}

static int	ft_wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static void	*ft_free(char **matrix, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	return (NULL);
}

static char	**ft_fill(char const *s, int words, char c, char **matrix)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = ft_wordlen(s, c);
		matrix[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (matrix[i] == NULL)
			return (ft_free(matrix, i));
		j = 0;
		while (j < len)
			matrix[i][j++] = *s++;
		matrix[i][j] = '\0';
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}
