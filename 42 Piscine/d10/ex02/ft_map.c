/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 00:09:01 by mtan              #+#    #+#             */
/*   Updated: 2017/04/18 00:09:03 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*res;
	int		i;

	i = 0;
	res = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}
