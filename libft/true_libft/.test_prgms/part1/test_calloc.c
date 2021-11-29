/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:27:50 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/02 16:55:09 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define REF_FCT calloc
#define TEST_FCT ft_calloc

int	main(int argc, char **argv)
{
	size_t	count;
	size_t	size;
	size_t	i;
	size_t	str_len;
	size_t	ref_str_len;
	char	*str;
	char	*ref_str;

	if (argc != 3)
		return (printf("error args\nusage : %s <count> <size>\n", argv[0]));
	count = atoi(argv[1]);
	size = atoi(argv[2]);
	str = TEST_FCT(count, size);
	ref_str = REF_FCT(count, size);
	i = 0;
	while (i < count * size - 1)
	{
		if (str[i] == 0)
			str[i] = '0';
		if (ref_str[i] == 0)
			ref_str[i] = '0';
		i ++;
	}
	str_len = strlen(str) + 1;
	ref_str_len = strlen(ref_str) + 1;
	printf("expected result	: %s of %lu char\nactual result	: %s of %lu char\n",
		ref_str, ref_str_len, str, str_len);
	free(str);
	free(ref_str);
	return (0);
}
