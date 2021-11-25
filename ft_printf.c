/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:48:45 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/25 13:37:52 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"
//could have been in main code but I lacked place...
static int	ft_retvalue(int localretvalue, int *error)
{
	if (localretvalue < 0)
	{
		*error = -1;
		return (-localretvalue);
	}
	else
		return (localretvalue);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		retvalue;
	int		error;
	va_list	ap;

	retvalue = 0;
	error = 1;
	va_start(ap, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i ++;
			retvalue += ft_retvalue(ft_handle_format(str[i], ap), &error);
		}
		else
			write(1, &str[i], 1);
		i ++;
		retvalue ++;
	}
	va_end(ap);
	return (retvalue * error);
}
