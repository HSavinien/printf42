/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:05:28 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/01 18:05:55 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define REF_FCT atoi
#define TEST_FCT ft_atoi

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (printf("error args\nusage : %s <nbr>\n", argv[0]));
	printf("expected result	: %d\nactual result	: %d\n",
		REF_FCT(argv[1]), TEST_FCT(argv[1]));
	return (0);
}
