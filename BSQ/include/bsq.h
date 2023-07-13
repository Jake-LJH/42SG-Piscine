/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wewong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 21:12:45 by wewong            #+#    #+#             */
/*   Updated: 2023/07/12 21:52:47 by wewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "def.h"
# include "display.h"
# include "board.h"
# include "optimisations.h"

void				ft_putstrsc(char *str, int start, int count);
int					ft_atoi(char *str);
int					ft_strlen(char *str);
void				ft_strcpy(char *dest, char *str);
void				start_board_check(char *str);
int					ft_get_width(char *str, t_instr info, int width, int c);
t_instr				*ft_first_line(char *str);
int					ft_strlen_mod(char *str);
char				*cut_str(char *str, int n);
void				ft_put_result(char *str, int start);
void				ft_concat(char *dest, char *src, int *size,
						int buff_size);
int					ft_bigger_sqr(char *str, int position[2],
						t_instr *info, int size);

#endif
