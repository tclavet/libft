/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclavet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 19:23:33 by tclavet           #+#    #+#             */
/*   Updated: 2018/05/04 19:27:33 by tclavet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count_words(char const *s, char c)
{
	size_t	i;
	int		words;

	i = 0;
	words = 0;
	while (s[i] && s[i] == c)
		i++;
	if (s[i])
		words++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] && s[i + 1] != c)
			words++;
		i++;
	}
	return (words);
}

static int	ft_countadd(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] == c)
		i++;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	int		words;
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	k;

	words = ft_count_words(s, c);
	if ((tab = (char **)malloc(sizeof(char *) * (words + 1))) == NULL)
		return (NULL);
	i = ft_countadd(s, c);
	k = 0;
	while (s[i])
	{
		j = 0;
		if (i == 0 || (s[i] != c && s[i - 1] == c))
		{
			while (s[i + j] != c && s[i + j])
				j++;
			tab[k] = ft_strsub(s, i, j);
			k++;
		}
		i++;
	}
	return (tab);
}
