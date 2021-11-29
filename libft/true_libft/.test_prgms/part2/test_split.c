/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:07:59 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/08 15:31:09 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	*to_split;
	char	sep;
	char	**str_array;
	int		i;

	if (argc != 3)
		return (printf("error args\nusage : %s <str> <sep>\n", argv[0]));
	to_split = argv[1];
	sep = argv[2][0];
	str_array = ft_split(to_split, sep);
	i = 0;
	while (str_array[i])
	{
		printf("str %d : %s\n",
			i, str_array[i]);
		i ++;
	}
	printf("str %d : %s\n",
		i, str_array[i]);
	return (0);
}
