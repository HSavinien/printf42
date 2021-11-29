/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:04:08 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/02 17:04:13 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define TEST_FCT ft_strjoin

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (printf("error args\nusage : %s <str1> <str2>\n", argv[0]));
	printf("result : %s\n", TEST_FCT(argv[1], argv[2]));
	return (0);
}
