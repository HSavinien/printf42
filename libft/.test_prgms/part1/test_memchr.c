/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:09:01 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/01 15:30:43 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define REF_FCT memchr 
#define TEST_FCT ft_memchr

int	main(int argc, char **argv)
{
	char	*str;
	int		c;
	size_t	range;

	if (argc != 4)
		return (printf("error args\nusage : %s <str> <nb> <range>\n", argv[0]));
	str = argv[1];
	c = (int)(argv[2][0]);
	range = atoi(argv[3]);
	printf("expected result	: %s\nactual result	: %s\n",
		REF_FCT(str, c, range), TEST_FCT(str, c, range));
	return (0);
}
