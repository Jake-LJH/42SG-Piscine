/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   def.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wewong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 22:17:27 by wewong            #+#    #+#             */
/*   Updated: 2023/07/12 22:17:29 by wewong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_H
# define DEF_H
# define BUFF1 8000000

typedef struct s_instr
{
	int		height;
	int		length;
	int		width;
	char	empty;
	char	obst;
	char	full;
}					t_instr;

typedef struct s_record
{
	int		x;
	int		y;
	int		max;
}					t_record;

#endif
