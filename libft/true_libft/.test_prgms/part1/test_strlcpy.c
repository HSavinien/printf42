/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:50:23 by tmongell          #+#    #+#             */
/*   Updated: 2021/10/22 17:13:05 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define REF_FCT strlcpy
#define TEST_FCT ft_strlcpy

int	main(int argc, char **argv)
{
	size_t	len;
	char	*src;
	char	*dst;
	char	*ref_dst;

	if (argc != 3)
		return (printf("error : args\nusage : %s <src> <len>", argv[0]));
	len = atoi(argv[2]) + 1;
	src = argv[1];
	dst = malloc(len);
	ref_dst = malloc(len);
	printf("expected result : copied string %s of %lu char into dest. "
		"now dest = %s\n", src, REF_FCT(ref_dst, src, len), ref_dst);
	printf("found result : copied string %s of %lu char into dest. " 
		"now dest = %s\n", src, TEST_FCT(dst, src, len), dst);
}
