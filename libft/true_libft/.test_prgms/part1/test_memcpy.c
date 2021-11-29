/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:13:23 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/01 18:37:28 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define REF_FCT memcpy
#define TEST_FCT ft_memcpy

int	main(int argc, char **argv)
{
	char	*dst;
	char	*src;
	char	*ref_dst;
	char	*ret_val;
	char	*ref_ret_val;
	size_t	len;

	if (argc != 3)
		return (printf("error args\nusage : %s <str> <len>\n", argv[0]));
	len = atoi(argv[2]);
	src = argv[1];
	dst = malloc(len);
	ref_dst = malloc(len);
	ref_ret_val = REF_FCT(ref_dst, src, len);
	ret_val = TEST_FCT(dst, src, len);

	printf("expected_result	: dst = %s, return value = %s\n"
		"actual result	: dst = %s, return value = %s\n",
		ref_dst, ref_ret_val, dst, ret_val);
	return (0);
}
