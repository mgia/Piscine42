/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 23:32:26 by mtan              #+#    #+#             */
/*   Updated: 2017/04/21 23:32:27 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*rs;

	rs = (t_btree*)malloc(sizeof(t_btree));
	rs->item = item;
	rs->left = 0;
	rs->right = 0;
	return (rs);
}
