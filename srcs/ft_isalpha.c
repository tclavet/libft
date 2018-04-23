/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclavet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 19:20:55 by tclavet           #+#    #+#             */
/*   Updated: 2018/04/23 19:24:12 by tclavet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

static int	ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

int			ft_isalpa(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	else
		return (0);
}
