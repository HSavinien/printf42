/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 18:10:42 by tmongell          #+#    #+#             */
/*   Updated: 2021/10/30 18:11:04 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define REF_FCT tolower
#define TEST_FCT ft_tolower

int	main(int argc, char **argv)
{
	int	nb_char;
	int	i;
	char *conv_str;
	char *ref_str;

	if (argc != 2)
		return (printf("error args\nusage : %s <str>\n", argv[0]));
	nb_char = ft_strlen(argv[1]);
	conv_str = malloc(nb_char);
	ref_str = malloc(nb_char);
	i = 0;
	while (argv[1][i])
	{
		conv_str[i] = TEST_FCT(argv[1][i]);
		ref_str[i] = REF_FCT(argv[1][i]);
		i ++;
	}
	printf("expected result	: %s\nactual result	: %s\n", ref_str, conv_str);
	return (0);
}
