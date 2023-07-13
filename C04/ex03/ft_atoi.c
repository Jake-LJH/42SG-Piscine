/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlai <jlai@student.42singapore.sg>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:18:47 by jlai              #+#    #+#             */
/*   Updated: 2023/06/28 18:19:48 by jlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	short	parity;
	int		n;

	n = 0;
	parity = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		n *= 10;
		n += *str - 48;
		++str;
	}
	if (!(parity % 2))
		return (n);
	return (-n);
}
/*
int	main(void)
{
	char	*s = "   ---+--+1234ab567";
	printf("%d\n", ft_atoi(s));
	return (0);
}*/
