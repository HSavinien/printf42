/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:17:16 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/02 18:22:38 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define TEST_FCT ft_strtrim

int	main(int argc, char **argv)
{
	char	*str;
	char	*set;

	if (argc != 3)
		return (printf("error args\nusage : %s <str> <limit_char>\n", argv[0]));
	str = argv[1];
	set = argv[2];
	printf("result : %s\n", TEST_FCT(str, set));
	return (0);
}
