/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wewong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 21:56:39 by wewong            #+#    #+#             */
/*   Updated: 2023/07/12 21:56:43 by wewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (str[i] <= 57 && str[i] >= 48)
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = src[i];
}

void	ft_putstrsc(char *str, int start, int count)
{
	write(1, &str[start], count);
}

void	ft_put_result(char *str, int start)
{
	int		i;
	ssize_t	ret;

	i = 0;
	while (str[start + i])
		i++;
	ret = write(1, &str[start], i);
	if (ret < 0)
		ft_putstr("Error in Write");
}
