/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rect_detect.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 15:27:21 by anazar            #+#    #+#             */
/*   Updated: 2017/04/23 16:06:43 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rect_detect.h"

int		is_square(char *str)
{
	t_fucknorm	t;
	int			i;

	t.x = 0;
	t.len = 0;
	t.y = 0;
	i = 0;
	while (i < stlen(str))
	{
		++t.x;
		if (str[i] == '\n')
		{
			if (t.len == 0)
				t.len = t.x;
			if (t.len > 0 && t.x != t.len)
				return (0);
			t.x = 0;
			++t.y;
		}
		++i;
	}
	if (t.len - 1 == t.y)
		return (2);
	else
		return (1);
}
