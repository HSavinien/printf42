/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:15:55 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/09 16:15:58 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	int	nb;
	int	fd;

	if (argc != 3)
		return (printf("error args\nusage : %s <str> <fd>\n", argv[0]));
	nb = atoi(argv[1]);
	fd = atoi(argv[2]);
	ft_putnbr_fd(nb, fd);
	write(fd, "\n", 1);
	return (0);
}
