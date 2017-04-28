/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 12:11:19 by anazar            #+#    #+#             */
/*   Updated: 2017/04/23 22:39:42 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include "ft_str.h"
#include "ft_str2.h"
#include "ft_print.h"
#include "ft_rush0.h"

char	*gen_rush(int max_cols, int max_rows, char (*f)(int, int, int, int))
{
	int		x;
	int		y;
	int		i;
	char	*rush;

	rush = malloc((max_cols + 1) * max_rows + 1);
	x = 1;
	y = 1;
	i = 0;
	while (y <= max_rows && max_cols > 0 && max_rows > 0)
	{
		if (x <= max_cols)
		{
			rush[i++] = f(x, y, max_rows, max_cols);
			x++;
		}
		else
		{
			rush[i++] = '\n';
			y++;
			x = 1;
		}
		rush[i] = '\0';
	}
	return (rush);
}

void	gen_rushes(char *buf, char **rush0_arr)
{
	int		x;
	int		y;

	x = (int)(ft_strchr(buf, '\n') - buf);
	y = ft_strcount_if(buf, '\n');
	rush0_arr[0] = gen_rush(x, y, rush00_filter);
	rush0_arr[1] = gen_rush(x, y, rush01_filter);
	rush0_arr[2] = gen_rush(x, y, rush02_filter);
	rush0_arr[3] = gen_rush(x, y, rush03_filter);
	rush0_arr[4] = gen_rush(x, y, rush04_filter);
	rush0_arr[5] = 0;
}

int		print_rushes(char *buf, char **rush0_arr)
{
	int		x;
	int		y;
	int		i;
	int		first;
	int		cmp;

	x = (int)(ft_strchr(buf, '\n') - buf);
	y = ft_strcount_if(buf, '\n');
	i = -1;
	first = 1;
	while (rush0_arr[++i])
	{
		cmp = ft_strcmp(rush0_arr[i], buf) == 0;
		if (first && cmp)
		{
			first = 0;
			ft_output_rush(i, x, y);
		}
		else if (cmp)
		{
			ft_putstr("|| ");
			ft_output_rush(i, x, y);
		}
	}
	return (first);
}

char	*read_input(void)
{
	char	*input;
	char	*buf;
	char	*tmp;
	int		sz;
	int		ret;

	sz = 4096;
	buf = 0;
	input = malloc(sz + 1);
	while ((ret = read(0, input, sz)) > 0)
	{
		input[ret] = '\0';
		sz += 4096;
		tmp = buf;
		buf = malloc(sz + 1);
		ft_strcpy(buf, tmp);
		ft_strcat(buf, input);
		free(tmp);
	}
	free(input);
	return (buf);
}

int		main(void)
{
	char	**rush0_arr;
	char	*input;
	int		i;

	input = read_input();
	if (input == NULL)
	{
		ft_putchar('\n');
		return (0);
	}
	rush0_arr = malloc(sizeof(char *) * 5 + 1);
	gen_rushes(input, rush0_arr);
	if (print_rushes(input, rush0_arr))
		ft_putstr("aucune");
	ft_putchar('\n');
	i = 0;
	while (rush0_arr[i])
	{
		free(rush0_arr[i]);
		i++;
	}
	free(rush0_arr[i]);
	free(rush0_arr);
	free(input);
	return (0);
}
