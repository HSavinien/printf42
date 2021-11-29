/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:39:00 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/15 16:50:36 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define REF_FCT memmove
#define TEST_FCT ft_memmove
/*
int	main(int argc, char **argv)
{
	char	*src;
	char	*ref_src;
	char	*dst;
	char	*ref_dst;
	size_t	len;

	if (argc != 3)
		return(printf("error args\nusage : %s <str> <len>\n", argv[0]));
	len = atoi(argv[2]);
	src = malloc(strlen(argv[1]) + 5);
	strlcpy(src, argv[1], strlen(argv[1]) + 1);
	dst = src + 4;
	ref_src = malloc(strlen(argv[1]) + 5);
	strlcpy(ref_src, argv[1], strlen(argv[1]) + 1);
	ref_dst = ref_src + 4;
	ref_dst = REF_FCT(ref_dst, ref_src, len);
	dst = TEST_FCT(dst, src, len);
	printf("expected result	: dst = %s, src = %s\n"
			"actual result	: dst = %s, src = %s\n",
		ref_dst, ref_src, dst, src);
	return (0);
}
*/

int	main(int argc, char **argv)
{
	char	*src;
	char	*ref_src;
	char	*dst;
	char	*ref_dst;
	size_t	len;

	if (argc != 3)
		return(printf("error args\nusage : %s <str> <len>\n", argv[0]));
	len = atoi(argv[2]);
	dst = malloc(strlen(argv[1]) + 5);
	src = dst + 4;
	strlcpy(src, argv[1], strlen(argv[1]) + 1);
	ref_dst = malloc(strlen(argv[1]) + 5);
	ref_src = ref_dst + 4;
	strlcpy(ref_src, argv[1], strlen(argv[1]) + 1);
	
	
	REF_FCT(ref_dst, ref_src, len);
	TEST_FCT(dst, src, len);
	printf("expected result	: dst = %s, src = %s\n"
			"actual result	: dst = %s, src = %s\n",
		ref_dst, ref_src, dst, src);
	return (0);
}

