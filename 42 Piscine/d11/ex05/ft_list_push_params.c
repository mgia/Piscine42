/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 19:46:16 by mtan              #+#    #+#             */
/*   Updated: 2017/04/19 19:46:18 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list		*list;
	t_list		*temp;
	int			i;

	list = NULL;
	temp = NULL;
	i = 1;
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = temp;
		temp = list;
		i++;
	}
	return (list);
}
