/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlai <jlai@student.42singapore.sg>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:57:33 by jlai              #+#    #+#             */
/*   Updated: 2023/06/27 16:28:21 by jlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	value;

	i = 0;
	value = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			value = 0;
		else
		{
			value = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	return (value);
}
/*
int	main(void)
{
	char s1[] = "";
	char s2[] = "";
	int	value;
	
	value = 0;
	value = ft_strcmp(s1, s2);
	printf("%d", value);
	return(0);
}
*/
