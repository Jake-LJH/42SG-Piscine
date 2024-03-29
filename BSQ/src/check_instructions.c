/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_instructions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlai <jlai@student.42singapore.sg>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:11:55 by jlai              #+#    #+#             */
/*   Updated: 2023/07/12 21:48:12 by wewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_strlen_mod(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (i > 16)
			return (0);
		i++;
		if (str[i] == '\n')
			return (i + 1);
	}
	return (i);
}

char	*cut_str(char *str, int n)
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = (char *)malloc(sizeof(*cpy) * (n));
	while (i <= n)
	{
		cpy[i] = str[i];
		i++;
	}
	return (cpy);
}

int	check_v(char *str, int a)
{
	int	i;
	int	b;

	i = 0;
	b = a - 5;
	if (a < 5)
		return (0);
	if ((str[a - 3] == str[a - 2]) || (str[a - 2] == str[a - 4]))
		return (0);
	else if (str[a - 4] == str[a - 3])
		return (0);
	if (b == 0 && str[0] <= 57 && str[0] >= 48)
		return (1);
	while (i <= b)
	{
		if (str[i] > 57 || str[i] < 48)
			return (0);
		i++;
	}
	return (1);
}

t_instr	*ft_first_line(char *str)
{
	t_instr	*ptr;
	char	*str2;
	int		a;

	ptr = NULL;
	a = ft_strlen_mod(str);
	if (check_v(str, a) == 1)
	{
		ptr = (t_instr *)malloc(sizeof(t_instr) * 1000);
		str2 = cut_str(str, a - 5);
		ptr->height = ft_atoi(str2);
		free(str2);
		ptr->length = a;
		ptr->empty = str[a - 4];
		ptr->obst = str[a - 3];
		ptr->full = str[a - 2];
	}
	return (ptr);
}
