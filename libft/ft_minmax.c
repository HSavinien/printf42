/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:27:12 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/24 16:48:51 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

//function that take several int and return the smallest. the first parametter
//is the number of args of the function.
int	ft_min(int nbargs, ...)
{
	int		min;
	va_list	ap;
	int		nb;

	va_start(ap, nbargs);
	min = va_arg(ap, int);
	nbargs --;
	while (nbargs)
	{
		nb = va_arg(ap, int);
		if (nb < min)
		{
			min = nb;
		}
		nbargs --;
	}
	va_end(ap);
	return (min);
}

//function that take several int and return the biggest. the first parametter
//is the number of args of the function.
int	ft_max(int nbargs, ...)
{
	int		max;
	va_list	ap;
	int		nb;

	va_start(ap, nbargs);
	max = va_arg(ap, int);
	nbargs --;
	while (nbargs)
	{
		nb = va_arg(ap, int);
		if (nb > max)
		{
			max = nb;
		}
		nbargs --;
	}
	va_end(ap);
	return (max);
}
