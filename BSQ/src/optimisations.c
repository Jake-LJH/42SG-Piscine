/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_optimisations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlai <jlai@student.42singapore.sg>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:12:07 by jlai              #+#    #+#             */
/*   Updated: 2023/07/12 20:12:09 by jlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "optimisations.h"

int	check_pos_limit(int position[2], int size, int width, int height)
{
	if (position[0] + size > width)
		return (0);
	else if (position[1] + size > height)
		return (0);
	return (1);
}

int	ft_bigger_sqr(char *str, int position[2], t_instr *info, int size)
{
	int		x;
	int		y;
	int		start;

	x = size - 1;
	y = 0;
	start = info->length + position[0] + (position[1]) * (info->width + 1);
	if (!check_pos_limit(position, size, info->width, info->height))
		return (0);
	while (y < size - 1)
	{
		if (str[start + x + y * (info->width + 1)] == info->empty)
			y++;
		else
			return (0);
	}
	x = 0;
	while (x < size)
	{
		if (str[start + x + y * (info->width + 1)] == info->empty)
			x++;
		else
			return (0);
	}
	return (1);
}
