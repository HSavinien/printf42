/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:40:49 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/17 13:25:38 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memdup(const void *mem)
{
	char	*cpy;
	size_t	len;

	len = strlen((char *)mem);
	cpy = malloc(sizeof(void *) * len);
	if (cpy == NULL)
		return (NULL);
	ft_memcpy(cpy, mem, len);
	return (cpy);
}
