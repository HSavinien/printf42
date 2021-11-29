/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:04:27 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/23 16:46:29 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *s1, size_t n)
{
	char	*cpy;
	size_t	len;

	len = ft_strlen(s1) + 1;
	if (len > n)
		len = n + 1;
	cpy = malloc(len);
	if (cpy == NULL)
		return (NULL);
	ft_strlcpy(cpy, s1, len);
	return (cpy);
}
