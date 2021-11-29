/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:55:00 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/17 13:24:36 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	*str;
	t_list	*lst;

	if (argc != 2)
		return (printf("error args\nusage : %s <str>\n", argv[0]));
	str = argv[1];
	lst = ft_lstnew(str);
	printf("new list element created. content : %s\n", lst->content);
	return (0);
}
