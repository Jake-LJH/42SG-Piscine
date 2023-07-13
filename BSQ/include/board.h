/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 22:43:58 by jlai              #+#    #+#             */
/*   Updated: 2023/07/12 22:44:22 by jlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOARD_H
# define BOARD_H
# include <stdlib.h>
# include "def.h"
# include "optimisations.h"

void		get_record(t_instr *info, char *str, t_record *record);
int			check_case(char *str, t_instr *info, int position[2], int size);
int			check_square(char *str, int position[2], t_instr *info, int size);
void		fill_board(t_record *record, char *str, t_instr *info);
t_record	*new_record(void);

#endif
