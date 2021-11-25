/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleformat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:44:43 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/25 13:18:15 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"

int	ft_handleformat(char form, va_list ap)
{
	if (form == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	else if (form == 'c')
		return (ft_printchar(va_arg(ap, int)));
	else if (form == 's')
		return (ft_printstr(va_arg(ap, char *)));
	else if (form == 'p')
		return (ft_printptr(va_arg(ap, void *)));
	else if (form == 'i')
		return (ft_printnbr(va_arg(ap, int)));
	else if (form == 'd')
		return (ft_printfloat(va_arg(ap, double)));
	else if (form == 'u')
		return (ft_printunb(va_arg(ap, unsigned int)));
	else if (form == 'x' || form == 'X')
		return (ft_printhexa(va_arg(ap, int), form));
	else
		return (-1);
}
