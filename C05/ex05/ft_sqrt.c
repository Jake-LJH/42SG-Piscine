/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlai <jlai@student.42singapore.sg>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:10:15 by jlai              #+#    #+#             */
/*   Updated: 2023/07/03 22:06:33 by jlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (nb <= 0 || nb == 2 || nb == 2147483647)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb)
	{
		nb -= i;
		j++;
		if (!nb)
			return (j);
		i += 2;
	}
	return (j);
}
/*
int	main(void)
{
	int	i;
	
	i = 16;
	printf("Last: %d\n", ft_sqrt(i));
	return (0);
}
*/	
