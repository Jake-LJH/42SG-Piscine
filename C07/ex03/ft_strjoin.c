/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlai <jlai@student.42singapore.sg>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:39:30 by jlai              #+#    #+#             */
/*   Updated: 2023/07/04 19:38:41 by jlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	size_alloc(int size, char **strs, char *sep)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (i < size)
		s += ft_strlen(strs[i++]);
	s += (size - 1) * ft_strlen(sep);
	return (s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	char	*origin;
	int		i;

	if (size <= 0)
		return ((char *)malloc(sizeof(char)));
	ptr = (char *)malloc(size_alloc(size, strs, sep) + 1);
	origin = ptr;
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcpy(ptr, strs[i]);
		ptr += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(ptr, sep);
			ptr += ft_strlen(sep);
		}
		i++;
	}
	*ptr = '\0';
	return (origin);
}
/*
int	main(void)
{
	char	*s1[] = {"",""};
	int	size;
	char	*sep;

	size = 0;
	sep = "||";

	printf("%s\n", ft_strjoin(size, s1, sep));
	return (0);
}
*/
