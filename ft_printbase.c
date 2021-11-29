/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:53:48 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/29 17:09:00 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"

static void	ft_swap(int	*a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

//get the nb of digit of the number, when the number is in the given base
static size_t	ft_nblen(long unsigned int nb, size_t basesize)
{
	size_t	len;

	len = 0;
	if (nb == 0)
		len ++;
	while (nb != 0)
	{
		len ++;
		nb /= basesize;
	}
	return (len);
}

// invert the order of the digit in an int array, because ft_get_digit put them
// in the wrong order
void	ft_rev_int_tab(int *tab, int size)
{
	int	pos1;
	int	pos2;

	pos1 = 0;
	pos2 = size - 1;
	while (pos1 < pos2)
	{
		ft_swap(&tab[pos1], &tab[pos2]);
		pos1 ++;
		pos2 --;
	}
}

//transform a number in the string of digit to represente this nb in base. digit
//are the value of each digit, not the char symbolising them
static int	*ft_get_digits(long unsigned int nb, size_t basesize, size_t len)
{
	int		*digits;
	size_t	i;

	digits = malloc(sizeof (int) * len);
	if (!digits)
	{
		free(digits);
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		digits[i] = nb % basesize;
		nb /= basesize;
		i ++;
	}
	ft_rev_int_tab(digits, len);
	return (digits);
}

//get a number, get a base, display the number in the base. in case of error,
//return a negative nb. else, return the nb of char printed.
//the function does not handle negative number
int	ft_printbase(long unsigned int nb, char *base)
{
	int		*digits;
	size_t	i;
	size_t	basesize;
	size_t	nblen;

	if (!base || !*base || !base[1])
		return (-10);
	basesize = ft_strlen(base);
	nblen = ft_nblen(nb, basesize);
	digits = ft_get_digits(nb, basesize, nblen);
	if (!digits)
		return (-3);
	i = 0;
	while (i < nblen)
	{
		write(1, base + digits[i], 1);
		i ++;
	}
	free(digits);
	return (i);
}
