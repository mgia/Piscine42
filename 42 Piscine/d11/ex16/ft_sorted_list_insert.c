/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 23:32:52 by mtan              #+#    #+#             */
/*   Updated: 2017/04/19 23:32:53 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list		*new;
	t_list		*current;

	if (!*begin_list)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	else if (cmp((*begin_list)->data, data) > 0)
	{
		current = *begin_list;
		*begin_list = ft_create_elem(data);
		(*begin_list)->next = current;
		return ;
	}
	current = *begin_list;
	new = ft_create_elem(data);
	while (current->next && cmp(current->next->data, data) < 0)
		current = current->next;
	new->next = current->next;
	current->next = new;
}
