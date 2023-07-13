/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlai <jlai@student.42singapore.sg>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:56:57 by jlai              #+#    #+#             */
/*   Updated: 2023/07/12 22:17:28 by jlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	x;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] <= 32 || base[i] >= 126)
			return (0);
		x = i + 1;
		while (base[x] != '\0')
		{
			if (base[i] == base[x])
				return (0);
			x++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	lnbr;

	lnbr = nbr;
	if (check_base(base) != 0)
	{
		if (lnbr < 0)
		{
			ft_putchar('-');
			lnbr *= -1;
		}
		if (lnbr >= check_base(base))
		{
			ft_putnbr_base((lnbr / check_base(base)), base);
			ft_putnbr_base((lnbr % check_base(base)), base);
		}
		else
			ft_putchar(base[lnbr]);
	}
}
/*
int	main(void)
{
	ft_putnbr_base(-2147483648, "01");
	return (0);
}*/
