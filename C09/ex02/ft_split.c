/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlai <jlai@student.42singapore.sg>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:58:43 by jlai              #+#    #+#             */
/*   Updated: 2023/07/10 18:01:11 by jlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_seperator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_string(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check_seperator(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !check_seperator(str[i], charset))
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check_seperator(str[i], charset))
		i++;
	return (i);
}

char	*word(char *str, char *charset)
{
	int		word_len;
	int		i;
	char	*word;

	i = 0;
	word_len = ft_strlen_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (word_len + 1));
	if (!word)
		return (NULL);
	while (i < word_len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**word_array;
	int		i;

	i = 0;
	word_array = malloc(sizeof(char *) * (count_string(str, charset) + 1));
	if (!word_array)
		return (NULL);
	while (*str != '\0')
	{
		while (*str != '\0' && check_seperator(*str, charset))
			str++;
		if (*str != '\0')
		{
			word_array[i] = word(str, charset);
			i++;
		}
		while (*str && !check_seperator(*str, charset))
			str++;
	}
	word_array[i] = 0;
	return (word_array);
}
