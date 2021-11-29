/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 18:16:03 by tmongell          #+#    #+#             */
/*   Updated: 2021/10/30 18:16:05 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"
#define REF_FCT bzero
#define TEST_FCT ft_bzero

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (printf("error : 1 parametter required\n"));
	int		ref_str[atoi(argv[1])];
	int		str[atoi(argv[1])];
	size_t	len;
	size_t		i;

	len = atoi(argv[1]);
	TEST_FCT(str, len);
	REF_FCT(ref_str, len);
	i = 0;
	printf("expected result :	| ");
	while (i++ < len)
		printf("%d | ", ref_str[i]);
	printf("\nof size : %lu\n", sizeof(ref_str));
	i = 0;
	printf("actual result : 	| ");
	while (i++ < len)
		printf("%d | ", str[i]);
	printf("\nof size : %lu\n", sizeof(str));
	return (0);
}
