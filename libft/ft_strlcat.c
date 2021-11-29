/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:20:05 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/15 19:41:56 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	first_size;

	j = 0;
	first_size = ft_strlen(dst);
	i = first_size;
	while (src[j] && i < dstsize - 1 && dstsize > 0)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	i --;
	if (dstsize > first_size)
		return (ft_strlen(src) + first_size);
	else
		return (ft_strlen(src) + dstsize);
}
