/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:06:31 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/11 14:20:47 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_is_in_str(char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i ++;
	}
	return (0);
}

static size_t	ft_get_final_lenght(char const *s1, char const *set)
{
	int		i;
	size_t	len;

	len = ft_strlen(s1);
	i = 0;
	while (ft_is_in_str(s1[len - 1], set))
		len --;
	if (len == 0)
		return (0);
	while (ft_is_in_str(s1[i], set))
		i ++;
	len -= i;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	size_t	len;
	char	*trimed;

	len = ft_get_final_lenght(s1, set);
	trimed = malloc(len + 1);
	if (trimed == NULL)
		return (NULL);
	ft_memset(trimed, 48, len);
	trimed[len] = '\0';
	i = 0;
	while (ft_is_in_str(s1[i], set))
		i ++;
	j = 0;
	while (trimed[j])
	{
		trimed[j] = s1[i];
		i ++;
		j ++;
	}
	return (trimed);
}
