/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimisations.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 22:44:30 by jlai              #+#    #+#             */
/*   Updated: 2023/07/12 22:44:40 by jlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTIMISATIONS_H
# define OPTIMISATIONS_H
# include "def.h"

int	check_pos_limit(int position[2], int size, int width, int height);
int	ft_bigger_sqr(char *str, int position[2], t_instr *info, int size);

#endif
