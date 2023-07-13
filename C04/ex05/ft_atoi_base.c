/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlai <jlai@student.42singapore.sg>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:10:56 by jlai              #+#    #+#             */
/*   Updated: 2023/07/13 19:35:37 by jlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

int	ft_base(char *base)
{
	int	i;
	int	x;
	int	base_len;

	i = 0;
	x = 0;
	base_len = ft_strlen(base);
	if (base[i] == '\0' || base_len < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		x = i + 1;
		while (base[x])
		{
			if (base[i] == base[x])
				return (0);
			x++;
		}
		i++;
	}
	return (i);
}

int	get_int(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	n;
	int	count;

	i = 0;
	n = 0;
	count = 0;
	if (ft_base(base) == 0)
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (get_int(str[i], base) >= 0)
	{
		n = n * ft_base(base) + get_int(str[i], base);
		i++;
	}
	if (!(count % 2))
		return (n);
	return (-n);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d",ft_atoi_base("+-+-BBB", "ABCD"));
}*/
