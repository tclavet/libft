/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclavet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 19:23:26 by tclavet           #+#    #+#             */
/*   Updated: 2018/04/23 20:16:03 by tclavet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	s2len;
	size_t	j;

	i = 0;
	j = 0;
	if ((s2len = ft_strlen(s2)) == 0)
		return ((char *)s1);
	while (s1[i] && i <= len)
	{
		j = 0;
		while ((s1[i] == s2[i + j]) && ((i + j) <= len))
		{
			if (j == s2len - 1)
				return ((char *)s1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
