/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:48:54 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/11 17:29:23 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static int	ft_handlenegative(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2", 2);
		return (147483648);
	}
	else
	{
		write(fd, "-", 1);
		return (-n);
	}
}

static char	ft_get_digit(int n)
{
	return ((n % 10) + '0');
}

void	ft_putnbr_fd(int n, int fd)
{
	char	digit;

	if (n < 0)
		n = ft_handlenegative(n, fd);
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	digit = ft_get_digit(n);
	write(fd, &digit, 1);
}
