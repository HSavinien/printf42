/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:43:51 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/29 20:01:59 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"lib_printf.h"

int	ft_printstr(char *str)
{
	int	retvalue;

	if (!str)
		return (-1);
	retvalue = write(1, str, ft_strlen(str));
	retvalue --;
	return (retvalue);
}
