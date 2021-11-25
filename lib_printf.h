/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_printf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:55:27 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/25 13:23:50 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_PRINTF_H
# define LIB_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

//main functions
int	ft_handle_format(char form, va_list ap);
int	ft_printf(const char *str, ...);
int	ft_printchar(int c);
int	ft_printstr(char *str);
int	ft_printptr(void *ptr);
int	ft_printnbr(int nb);
int	ft_printfloat(double nb);
int	ft_printunb(unsigned int nb);
int	ft_printhexa(int nb, int form);//lowercase if %x, uppercase if %X
//bonus function

//subfunction (used by the others)

#endif
