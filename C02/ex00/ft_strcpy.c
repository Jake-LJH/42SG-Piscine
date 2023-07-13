/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlai <jlai@student.42singapore.sg>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:22:27 by jlai              #+#    #+#             */
/*   Updated: 2023/06/26 14:55:00 by jlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*out;

	out = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (out);
}
/*
int	main(void)
{
	char	d[] = "Bye";
	char	s[] = "HelloWorld";
	printf("%s\n", d);
	ft_strcpy(d, s);
	printf("%s", d);
	return (0);
}
*/
