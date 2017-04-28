/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 23:10:17 by mtan              #+#    #+#             */
/*   Updated: 2017/04/19 23:10:18 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int			count;

	count = 0;
	if (begin_list)
	{
		count = 1;
		while (begin_list->next)
		{
			begin_list = begin_list->next;
			count++;
		}
	}
	return (count);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*head;
	t_list	*current;
	int		count;
	int		i;
	void	*temp;

	head = begin_list;
	current = NULL;
	count = ft_list_size(begin_list);
	while (head != current)
	{
		current = begin_list;
		i = 1;
		while (i++ < count)
			current = current->next;
		if (head == current)
			break ;
		temp = head->data;
		head->data = current->data;
		current->data = temp;
		head = head->next;
		count--;
	}
	head = begin_list;
}
