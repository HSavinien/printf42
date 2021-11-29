/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:29:19 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/03 15:31:26 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	int	nb;

	if (argc < 2)
		return (printf("error args\nusage : %s <nb>\n", argv[0]));
	nb = atoi(argv[1]);
	printf("result : nb is %s\n", ft_itoa(nb));
	return (0);
}
