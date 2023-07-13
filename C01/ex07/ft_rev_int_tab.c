/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlai <jlai@student.42singapore.sg>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:00:15 by jlai              #+#    #+#             */
/*   Updated: 2023/06/24 16:08:22 by jlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
/*
int	main(void)
{
	int	size;
	int	arr_list[4] = {25, 50, 75, 100};

	size = 4;
	printf("Input: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr_list[i]);
	}
	printf("\n");
	ft_rev_int_tab(arr_list, size);
	printf("Output: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr_list[i]);
	}
	return (0);
}
*/
