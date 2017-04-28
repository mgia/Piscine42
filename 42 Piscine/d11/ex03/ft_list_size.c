/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 20:04:04 by mtan              #+#    #+#             */
/*   Updated: 2017/04/18 20:04:05 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;

	i = 0;
	if (!begin_list)
	{
		return (0);
	}
	while (begin_list->next != NULL)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i + 1);
}
