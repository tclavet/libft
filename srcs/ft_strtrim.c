/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclavet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 19:23:42 by tclavet           #+#    #+#             */
/*   Updated: 2018/04/23 20:06:47 by tclavet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	i = 0;
	j = ft_strlen(s);
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (s[j - 1] == ' ' || s[j - 1] == '\n' || s[i - 1] == '\t')
		j--;
	if (i == 0 && j == ft_strlen(s))
		return (ft_strcpy(str, s));
	if ((str = ft_strnew(j - i + 1)) == NULL)
		return (NULL);
	k = 0;
	while (i < j)
	{
		str[k] = s[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
