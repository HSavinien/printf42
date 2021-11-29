/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strndup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:20:48 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/08 14:22:40 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define REF_FCT strndup
#define TEST_FCT ft_strndup

int	main(int argc, char **argv)
{
	char	*str;
	size_t	len;

	if (argc != 3)
		return (printf("error args\nusage : %s <str> <len>\n", argv[0]));
	str = argv[1];
	len = atoi(argv[2]);
	printf("expected result	: %s\nactual result	: %s\n",
		REF_FCT(str, len), TEST_FCT(str, len));
	return (0);
}
