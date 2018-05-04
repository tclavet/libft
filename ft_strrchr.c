/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclavet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 19:23:29 by tclavet           #+#    #+#             */
/*   Updated: 2018/05/04 20:05:55 by tclavet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	int		len;

	tmp = NULL;
	len = (int)ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			tmp = &(((char *)s)[len]);
		len--;
	}
	return (tmp);
}
