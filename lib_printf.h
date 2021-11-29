/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_printf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:55:27 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/29 17:25:08 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_PRINTF_H
# define LIB_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"

//main functions
int		ft_handle_format(char form, va_list ap);
int		ft_printf(const char *str, ...);
//format functions
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_printptr(void *ptr);
int		ft_printnbr(long int nb);
int		ft_printbase(long unsigned int nb, char *base);
//bonus format function

//subfunction (used by the others)
#endif
