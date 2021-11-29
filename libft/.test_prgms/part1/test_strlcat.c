/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 18:16:55 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/12 20:10:00 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define REF_FCT strlcat
#define TEST_FCT ft_strlcat

int	main(int argc, char **argv)
{
	size_t	len;
	char	*src;
	char	*dst;
	char	*ref_dst;

	if (argc != 4)
		return (printf("error args\nusage : %s <dst> <src> <len>\n", argv[0]));
	len = atoi(argv[3]);
	src = argv[2];
	dst = malloc(strlen(argv[1]) + len);
	ref_dst = malloc(strlen(argv[1]) + len);
	strlcpy(dst, argv[1], strlen(argv[1]) + 1);
	strlcpy(ref_dst, argv[1], strlen(argv[1]) + 1);
	printf("expected result	: "
		"concatened dst and src, now dst is %s, of lenght %lu\n",
		ref_dst, REF_FCT(ref_dst, src, len));
	printf("actual result	: "	
		"concatened dst and src, now dst is %s, of lenght %lu\n",
		dst, TEST_FCT(dst, src, len));
	printf ("\n");
}
/*
int main(void)
{
	int		i;
	char	*src;
	char	*dst;
	int		output;

	src = strdup("lol");
	i = 0;
	while (i <= 15)
	{
		dst = strdup("coucou ");
		output = strlcat(dst, src, i);
		printf("for i = %d, result is %s and return value is %d\n", i, dst, output);
		free(dst);
		i ++;
	}
}
*/
