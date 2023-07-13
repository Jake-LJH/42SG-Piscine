/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlai <jlai@student.42singapore.sg>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:29:39 by jlai              #+#    #+#             */
/*   Updated: 2023/06/24 16:05:01 by jlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 11;
	ft_ultimate_div_mod(&a, &b);
	printf("Division: %d\n", a);
	printf("Mod: %d", b);
	return (0);
}
*/
