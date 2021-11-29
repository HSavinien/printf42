/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 18:17:23 by tmongell          #+#    #+#             */
/*   Updated: 2021/10/30 18:17:25 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define REF_FCT strlen
#define TEST_FCT ft_strlen

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (printf("error : at least one argument required\n"));
	i = 1;
	while (i < argc)
	{
		if (!(REF_FCT(argv[i]) ^ TEST_FCT(argv[i])))
			printf("OK for %s : result is %lu\n", argv[i], TEST_FCT(argv[i]));
		else
		{
			printf("KO for %s : ", argv[i]);
			printf("your result is %lu , ", TEST_FCT(argv[i]));
			printf("ref result is %lu , ", REF_FCT(argv[i]));
		}
		i ++;
	}
	return (0);
}
