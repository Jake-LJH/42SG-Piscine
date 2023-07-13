/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlai <jlai@student.42singapore.sg>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 19:07:16 by jlai              #+#    #+#             */
/*   Updated: 2023/06/27 12:27:20 by jlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*c;

	c = dest;
	while (n > 0)
	{
		if (*src)
		{
			*c = *src;
			src++;
		}
		else
			*c = '\0';
		c++;
		n--;
	}
	return (dest);
}
