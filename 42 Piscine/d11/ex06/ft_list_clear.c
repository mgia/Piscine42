/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 17:49:58 by mtan              #+#    #+#             */
/*   Updated: 2017/04/19 17:49:59 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list		*current;
	t_list		*link;

	current = *begin_list;
	while (current)
	{
		link = current->next;
		free(current);
		current = link;
	}
	*begin_list = NULL;
}
