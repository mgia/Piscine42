/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 21:39:23 by mtan              #+#    #+#             */
/*   Updated: 2017/04/19 21:39:24 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list		*current;

	if (*begin_list1)
	{
		current = *begin_list1;
		while (current->next != NULL)
			current = current->next;
		current->next = begin_list2;
	}
	else
		*begin_list1 = begin_list2;
}
