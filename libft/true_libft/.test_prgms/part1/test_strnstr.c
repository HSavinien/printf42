/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:58:03 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/01 17:08:46 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define REF_FCT strnstr
#define TEST_FCT ft_strnstr

int	main(int argc, char **argv)
{
	char	*str1;
	char	*str2;
	size_t	len;

	if (argc != 4)
		return (printf("error args\nusage : %s <haystack> <needle> <len>\n",
				argv[0]));
	str1 = argv[1];
	str2 = argv[2];
	len = atoi(argv[3]);
	printf("expected result	: %s\nactual result	: %s\n",
		REF_FCT(str1, str2, len), TEST_FCT(str1, str2, len));
	return (0);
}
