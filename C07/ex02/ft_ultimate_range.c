/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlai <jlai@student.42singapore.sg>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:23:46 by jlai              #+#    #+#             */
/*   Updated: 2023/07/04 15:56:21 by jlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	r;

	r = max - min;
	if (r < 0 || min == max)
	{
		*range = 0;
		return (0);
	}
	ptr = (int *)malloc(sizeof(int) * r);
	if (!ptr)
	{
		*range = 0;
		return (-1);
	}
	*range = ptr;
	while (min < max)
	{
		*ptr = min;
		min++;
		ptr++;
	}
	return (r);
}
