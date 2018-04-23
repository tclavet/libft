/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclavet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 19:22:50 by tclavet           #+#    #+#             */
/*   Updated: 2018/04/23 19:24:43 by tclavet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;

	out = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	out = ft_strcpy(out, s1);
	out = ft_strcat(out, s2);
	return (out);
}
