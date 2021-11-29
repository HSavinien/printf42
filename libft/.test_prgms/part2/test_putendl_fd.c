/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putendl_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:45:35 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/09 15:47:46 by tmongell         ###   ########.fr       */
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
	char	*str;
	int		fd;

	if (argc != 3)
		return (printf("error args\nusage : %s <str> <fd>\n", argv[0]));
	str = argv[1];
	fd = atoi(argv[2]);
	ft_putendl_fd(str, fd);
	return (0);
}
