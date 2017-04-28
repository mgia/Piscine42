/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 13:56:12 by mtan              #+#    #+#             */
/*   Updated: 2017/04/14 13:56:14 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, str, 1);
		str++;
	}
}

int		open_door(t_door *door)
{
	ft_putstr("Door opening...\n");
	door->state = OPEN;
	return (TRUE);
}

int		close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	door->state = CLOSE;
	return (TRUE);
}

int		is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	door->state = OPEN;
	return (TRUE);
}

int		is_door_close(t_door *door)
{
	ft_putstr("Door is close ?\n");
	door->state = OPEN;
	return (0);
}
