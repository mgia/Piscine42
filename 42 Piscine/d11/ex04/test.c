/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 19:33:30 by mtan              #+#    #+#             */
/*   Updated: 2017/04/18 19:33:31 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

t_list	*ft_list_last(t_list *begin_list);

int		main(void)
{
	t_list		*list;
	t_list		*show;

	list = ft_create_elem("1");
	list->next = ft_create_elem("2");
	list->next->next = ft_create_elem("3");
	list->next->next->next = ft_create_elem("shown last element!!");
	show = ft_list_last(list);
	printf("Last element in the list is : %s\n", show->data);
	return (0);
}
