/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bool_fct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 18:15:35 by tmongell          #+#    #+#             */
/*   Updated: 2021/10/30 18:15:39 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define REF_FCT isalpha
#define TEST_FCT isalpha

//while the default test protocole test a single char string, this one test a
//list of numbers (which are given as str, and atoied in the function)
int	test_numbers(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!(TEST_FCT(atoi(argv[i])) ^ REF_FCT(atoi(argv[i]))))
			printf("OK for %s : %d\n", argv[i], TEST_FCT(atoi(argv[i])));
		else
		{
			printf("KO for %s : ", argv[i]);
			printf("your result is %d %c ", TEST_FCT(atoi(argv[i])), ';');
			printf("ref function result is %d\n", REF_FCT(atoi(argv[i])));
		}
		i ++;
	}
	return (0);
}

int	test_string(int argc, char **argv)
{
	unsigned long int	i;

	if (argc < 2)
		return (printf("error : at least one argument required\n"));
	if (argc > 2)
		return (test_numbers(argc, argv));
	i = 0;
	while (i < strlen(argv[1]))
	{
		if (!(TEST_FCT(argv[1][i]) ^ REF_FCT(argv[1][i])))
			printf("OK for %c : %d\n", argv[1][i], REF_FCT(argv[1][i]));
		else
		{
			printf("KO for %c : ", argv[1][i]);
			printf("your result is %d %c ", TEST_FCT(argv[1][i]), ';');
			printf("ref function result is %d\n", REF_FCT(argv[1][i]));
		}
		i ++;
	}
	return (0);
}
