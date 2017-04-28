/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 21:24:50 by mtan              #+#    #+#             */
/*   Updated: 2017/04/19 21:24:51 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list		*temp;
	t_list		*last;
	t_list		*current;

	temp = NULL;
	last = NULL;
	current = *begin_list;
	while (current)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			if (current == *begin_list)
				*begin_list = current->next;
			else
				last->next = current->next;
			temp = current;
			current = current->next;
			free(temp);
		}
		else
		{
			last = current;
			current = current->next;
		}
	}
}
