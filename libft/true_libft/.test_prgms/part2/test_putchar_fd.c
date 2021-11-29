/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:20:26 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/09 15:33:05 by tmongell         ###   ########.fr       */
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
	int		i;
	char	*str;
	int		fd;

	if (argc != 3)
		return (printf("error args\nusage : %s <str> <fd>\n", argv[0]));
	i = 0;
	str = argv[1];
	fd = atoi(argv[2]);
	while (str[i])
		ft_putchar_fd(str[i++], fd);
	write (fd, "\n", 1);
	return (0);
}
