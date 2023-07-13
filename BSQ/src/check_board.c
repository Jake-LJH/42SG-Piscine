/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlai <jlai@student.42singapore.sg>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:12:15 by jlai              #+#    #+#             */
/*   Updated: 2023/07/12 22:15:14 by wewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	check_valid_board(char *str, t_instr *info)
{
	str += info->length;
	while (*str)
	{
		if (*str != '\n' && *str != info->empty && \
			*str != info->obst && *str != info->full)
			return (0);
		str++;
	}
	return (1);
}

void	start_board_check(char *str)
{
	t_instr		*info;
	t_record	*record;

	info = ft_first_line(str);
	record = new_record();
	if (info && info->height > 0 && check_valid_board(str, info))
	{
		info->width = info->height;
		get_record(info, str, record);
		fill_board(record, str, info);
		ft_putstrsc(str, info->length, info->height * (info->height + 1));
	}
	else
		ft_putstr("map error\n");
	free(record);
	free(info);
}
