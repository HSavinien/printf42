/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 18:55:05 by tmongell          #+#    #+#             */
/*   Updated: 2021/10/30 18:57:32 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define REF_FCT strrchr
#define TEST_FCT ft_strrchr

int	main(int argc, char **argv)
{
	char	*str;
	char	c;

	if (argc != 3 || argv[2][1])
		return (printf("error args\nusage : %s <str> <char>\n", argv[0]));
	str = argv[1];
	c = argv[2][0];
	printf("expected result	: %s\nactual resutl	: %s\n",
		REF_FCT(str, c), TEST_FCT(str, c));
	return (0);
}
