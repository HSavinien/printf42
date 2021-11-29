/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleformat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:44:43 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/29 20:38:27 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"

int	ft_handle_format(char form, va_list ap)
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
	else if (form == 'i' || form == 'd')
		return (ft_printnbr(va_arg(ap, int)));
	else if (form == 'u')
		return (ft_printbase(va_arg(ap, unsigned long int), "0123456789"));
	else if (form == 'x')
		return (ft_printbase(va_arg(ap, unsigned long int), "0123456789abcdef"));
	else if (form == 'X')
		return (ft_printbase(va_arg(ap, unsigned long int), "0123456789ABCDEF"));
	else
		return (-1);
}
