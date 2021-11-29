/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:21:18 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/02 16:22:15 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define TEST_FCT ft_substr

int	main(int argc, char **argv)
{
	char			*str;
	unsigned int	start;
	size_t			len;

	if (argc != 4)
		return (printf("error args\nusage : %s <str> <pos> <len>\n", argv[0]));
	str = argv[1];
	start = atoi(argv[2]);
	len = atoi(argv[3]);
	printf("result : %s\n", TEST_FCT(str, start, len));
	return (0);
}
