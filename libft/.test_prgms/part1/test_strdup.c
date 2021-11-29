/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:07:47 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/02 15:19:58 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define REF_FCT strdup
#define TEST_FCT ft_strdup

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (printf("error args\nusage : %s <str>\n", argv[0]));
	printf("expected result	: %s\nactual result	: %s\n",
		REF_FCT(argv[1]), TEST_FCT(argv[1]));
	return (0);
}
