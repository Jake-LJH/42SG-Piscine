/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlai <jlai@student.42singapore.sg>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:11:17 by jlai              #+#    #+#             */
/*   Updated: 2023/06/29 21:43:29 by jlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 0)
	{
		while (argv[0][i] != '\0')
		{
			write(1, &argv[0][i], 1);
			++i;
		}
		write(1, "\n", 1);
	}
	return (0);
}