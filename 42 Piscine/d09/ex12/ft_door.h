/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 13:56:19 by mtan              #+#    #+#             */
/*   Updated: 2017/04/14 13:56:21 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <unistd.h>
# define TRUE 1
# define OPEN 1
# define CLOSE 0
# define EXIT_SUCCESS 0

typedef struct	s_door
{
	int		state;
}				t_door;

int				is_door_open(t_door *door);
int				is_door_close(t_door *door);
int				open_door(t_door *door);
int				close_door(t_door *door);
void			ft_putstr(char *str);

#endif
