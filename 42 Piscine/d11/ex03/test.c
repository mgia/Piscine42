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

int		ft_list_size(t_list *begin_list);

int		main(void)
{
	t_list		*list = NULL;

	list = ft_create_elem("1");
	list->next = ft_create_elem("2");
	list->next->next = ft_create_elem("3");
	list->next->next->next = ft_create_elem("4");
	printf("List size is %d\n", ft_list_size(list));
	return (0);
}
