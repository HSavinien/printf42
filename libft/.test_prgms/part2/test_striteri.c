/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:16:19 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/09 14:33:50 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

//this function as nothing to do with the salad...
void	ft_caesar(unsigned int n, char *c)
{
	if (isupper(*c))
	{
		*c += n % 26;
		*c -= 'A';
		*c %= 26;
		*c += 'A';
	}
	else if (islower(*c))
	{
		*c += n % 26;
		*c -= 'a';
		*c %= 26;
		*c += 'a';
	}
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc != 2)
		return (printf("error args\nusage : %s <str>\n", argv[0]));
	str = argv[1];
	ft_striteri(str, ft_caesar);
	printf ("\nresult : %s\n", str);
	return (0);
}
