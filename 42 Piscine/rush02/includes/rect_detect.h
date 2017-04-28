/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rect_detect.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 15:51:50 by anazar            #+#    #+#             */
/*   Updated: 2017/04/23 15:57:51 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RECT_DETECT_H
# define RECT_DETECT_H

typedef struct	s_fucknorm
{
	int			x;
	int			y;
	int			len;
}				t_fucknorm;

int				stlen(char *str);

int				is_square(char *str);

#endif
