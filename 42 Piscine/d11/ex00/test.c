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

int		main(void)
{
	t_list		*list;

	list = ft_create_elem("1");
	list->next = ft_create_elem("2");
	list->next->next = ft_create_elem("3");
	list->next->next->next = ft_create_elem("4");
	list->next->next->next->next = ft_create_elem("5");

	while (list->next != NULL)
	{
		printf("%s", list->data);
		list = list->next;
	}
	printf("%s", list->data);
	return (0);
}
