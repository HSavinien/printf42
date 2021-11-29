/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmongell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:40:19 by tmongell          #+#    #+#             */
/*   Updated: 2021/11/29 19:55:39 by tmongell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"
#include <stdio.h>

int main()
{
	//test of c flag
	ft_printf("test %%s :\n");
	printf("\ntest 1 : expected %d, got %d\n",printf("%s", ""), ft_printf("%s", ""));
	printf("\ntest 2 : expected %d, got %d\n",printf(" %s", ""), ft_printf(" %s", ""));
	printf("\ntest 3 : expected %d, got %d\n",printf("%s ", ""), ft_printf("%s ", ""));
	printf("\ntest 4 : expected %d, got %d\n",printf(" %s ", ""), ft_printf(" %s ", ""));
	printf("\ntest 5 : expected %d, got %d\n",printf(" %s ", "-"), ft_printf(" %s ", "-"));
	printf("\ntest 6 : expected %d, got %d\n",printf(" %s %s ", "", "-"), ft_printf(" %s %s ", "", "-"));
}
