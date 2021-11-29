/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:36:52 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/24 16:57:26 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_min_of_two(int nb1, int nb2)
{
	if (nb1 < nb2)
		return (nb1);
	else
		return (nb2);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	if (!src || !dst)
		return (NULL);
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			*((char *)dst + i) = *((char *)src + i);
			i ++;
		}
	}
	else
	{
		i = ft_min_of_two(ft_strlen(src), len);
		while (i > 0)
		{
			*((char *)dst + i) = *((char *)src + i);
			i --;
		}
		*((char *)dst + i) = *((char *)src + i);
	}
	return (dst);
}
