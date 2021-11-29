/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:16:19 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/09 13:21:18 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

//this function as nothing to do with the salad...
char	ft_caesar(unsigned int n, char c)
{
	if (isupper(c))
	{
		c += n;
		c -= 'A';
		c %= 26;
		c += 'A';
	}
	else if (islower(c))
	{
		c += n;
		c -= 'a';
		c %= 26;
		c += 'a';
	}
	return (c);
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc != 2)
		return (printf("error args\nusage : %s <str>\n", argv[0]));
	str = argv[1];
	str = ft_strmapi(str, ft_caesar);
	printf ("result : %s\n", str);
	return (0);
}
