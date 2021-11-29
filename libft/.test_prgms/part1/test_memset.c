/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:43:01 by tmongell          #+#    #+#             */
/*   Updated: 2021/10/21 17:16:25 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define REF_FCT memset
#define TEST_FCT ft_memset

int	main(int argc, char **argv)
{
	char	ref_str[atoi(argv[2])];
	char	str[atoi(argv[2])];
	int		filler;
	size_t	len;

	if (argc != 3)
		return (printf("error : 2 parametter required : filler and lenght\n"));
	filler = atoi(argv[1]);
	len = atoi(argv[2]);
	TEST_FCT(str, filler, len);
	REF_FCT(ref_str, filler, len);
	if (!strcmp(str, ref_str))
		printf("OK\n");
	printf("expected result :	%s of size %lu\n", ref_str, sizeof(ref_str));
	printf("actual result :		%s of size %lu\n", str, sizeof (str));
	return (0);
}
