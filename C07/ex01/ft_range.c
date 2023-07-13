/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlai <jlai@student.42singapore.sg>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:22:37 by jlai              #+#    #+#             */
/*   Updated: 2023/07/04 15:21:29 by jlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*i;
	int	*j;

	if (min >= max)
		return (NULL);
	i = (int *)malloc(sizeof(int) * (max - min));
	j = i;
	while (min < max)
	{
		*i = min;
		min++;
		i++;
	}
	return (j);
}
