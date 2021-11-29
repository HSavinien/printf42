/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:36:04 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/25 16:46:36 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_nblen(int nb)
{
	size_t	len;

	len = 0;
	if (nb <= 0)
		len ++;
	while (nb != 0)
	{
		len ++;
		nb = nb / 10;
	}
	return (len);
}

//get the pos digit of nb. for exemple in 42, 2 is pos 1 and 4 is pos 2.
static char	ft_get_digit(int nb, int pos)
{
	int		i;

	i = 0;
	while (i < pos)
	{
		nb /= 10;
		i ++;
	}
	nb %= 10;
	if (nb < 0)
		nb = -nb;
	return (nb + '0');
}

char	*ft_itoa(int n)
{
	char	*str_nb;
	size_t	len_nb;
	size_t	i;

	len_nb = ft_nblen(n);
	str_nb = malloc (len_nb + 1);
	if (!str_nb)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		str_nb[i] = '-';
		i ++;
	}
	while (i < len_nb)
	{
		str_nb[i] = ft_get_digit(n, len_nb - i - 1);
		i ++;
	}
	str_nb[i] = '\0';
	return (str_nb);
}
