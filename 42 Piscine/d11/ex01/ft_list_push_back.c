/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 20:40:08 by mtan              #+#    #+#             */
/*   Updated: 2017/04/18 20:40:09 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list		*current;

	current = *begin_list;
	if (!current)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (current->next != 0)
		current = current->next;
	current->next = ft_create_elem(data);
}
