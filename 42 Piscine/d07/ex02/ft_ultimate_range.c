/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 12:58:45 by mtan              #+#    #+#             */
/*   Updated: 2017/04/12 13:08:11 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;

	if (min < max)
	{
		*range = (int*)malloc(sizeof(int) * (max - min));
		i = 0;
		while (min < max)
		{
			(*range)[i] = min;
			min++;
			i++;
		}
		return (i);
	}
	return (0);
}
