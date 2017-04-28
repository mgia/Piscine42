/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 22:57:18 by mtan              #+#    #+#             */
/*   Updated: 2017/04/19 22:57:18 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list		*temp;
	t_list		*last;
	t_list		*current;

	current = *begin_list;
	while (current->next)
	{
		if ((*cmp)(current->data, current->next->data) > 0)
		{
			if (current != *begin_list)
				last->next = current->next;
			else
				*begin_list = current->next;
			temp = current->next->next;
			current->next->next = current;
			current->next = temp;
			current = *begin_list;
		}
		else
		{
			last = current;
			current = current->next;
		}
	}
}
