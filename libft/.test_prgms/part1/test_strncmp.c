/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 18:16:55 by tmongell          #+#    #+#             */
/*   Updated: 2021/10/30 19:19:39 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define REF_FCT strncmp
#define TEST_FCT ft_strncmp

int	main(int argc, char **argv)
{
	size_t	maxlen;
	char	*s1;
	char	*s2;

	if (argc != 4)
		return (printf("error args\nusage : %s <s1> <s2> <maxlen>\n", argv[0]));
	maxlen = atoi(argv[3]);
	s1 = argv[1];
	s2 = argv[2];
	printf("compared the first %lu char of %s and %s\n"
		"expected result	: %d\nactual result	: %d\n",
		maxlen, s1, s2, REF_FCT(s1, s2, maxlen), TEST_FCT(s1, s2, maxlen));
	return (0);
}
