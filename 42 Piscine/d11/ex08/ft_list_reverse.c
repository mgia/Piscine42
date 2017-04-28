/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 19:44:21 by mtan              #+#    #+#             */
/*   Updated: 2017/04/19 19:44:34 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list		*head;
	t_list		*current;
	t_list		*temp;

	head = NULL;
	current = *begin_list;
	while (current)
	{
		temp = current->next;
		current->next = head;
		head = current;
		current = temp;
	}
	*begin_list = head;
}
