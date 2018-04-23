/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclavet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 19:21:49 by tclavet           #+#    #+#             */
/*   Updated: 2018/04/23 20:06:25 by tclavet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*tmp;

	if ((tmp = malloc(len)) == NULL)
		return (NULL);
	ft_memcpy(tmp, (void *)src, len);
	ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst);
}
