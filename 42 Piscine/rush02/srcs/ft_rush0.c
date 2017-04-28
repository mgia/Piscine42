/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 22:56:27 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/23 19:22:26 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_rush0.h"

char	rush00_filter(int x, int y, int max_rows, int max_cols)
{
	char c;

	if ((x == 1 && y == 1) || (x == max_cols && y == 1)
		|| (x == 1 && y == max_rows) || (x == max_cols && y == max_rows))
		c = 'o';
	else if (x == 1 || x == max_cols)
		c = '|';
	else if (y == 1 || y == max_rows)
		c = '-';
	else
		c = ' ';
	return (c);
}

char	rush01_filter(int x, int y, int max_rows, int max_cols)
{
	char c;

	c = (x > 1 && x < max_cols && y > 1 && y < max_rows) ? ' ' : '*';
	if (x == 1 && y == 1)
		c = '/';
	else if (x == 1 && y == max_rows)
		c = '\\';
	else if (x == max_cols && y == 1)
		c = '\\';
	else if (x == max_cols && y == max_rows)
		c = '/';
	return (c);
}

char	rush02_filter(int x, int y, int max_rows, int max_cols)
{
	char c;

	c = (x > 1 && x < max_cols && y > 1 && y < max_rows) ? ' ' : 'B';
	if ((x == 1 && y == 1) || (x == max_cols && y == 1))
		c = 'A';
	else if ((x == 1 && y == max_rows) || (x == max_cols && y == max_rows))
		c = 'C';
	return (c);
}

char	rush03_filter(int x, int y, int max_rows, int max_cols)
{
	char c;

	c = (x > 1 && x < max_cols && y > 1 && y < max_rows) ? ' ' : 'B';
	if ((x == 1 && y == 1) || (x == 1 && y == max_rows))
		c = 'A';
	else if ((x == max_cols && y == 1) || (x == max_cols && y == max_rows))
		c = 'C';
	return (c);
}

char	rush04_filter(int x, int y, int max_rows, int max_cols)
{
	char c;

	c = (x > 1 && x < max_cols && y > 1 && y < max_rows) ? ' ' : 'B';
	if ((x == 1 && y == 1) || (x == max_cols && y == max_rows))
		c = 'A';
	else if ((x == 1 && y == max_rows) || (x == max_cols && y == 1))
		c = 'C';
	return (c);
}
