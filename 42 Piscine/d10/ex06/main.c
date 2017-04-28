/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 23:23:41 by mtan              #+#    #+#             */
/*   Updated: 2017/04/17 23:23:42 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_get_number(char *a)
{
	int		nb;
	int		sign;

	nb = 0;
	sign = 1;
	if (*a == '-')
	{
		sign = -1;
		a++;
	}
	while (*a >= '0' && *a <= '9')
	{
		nb = nb * 10 + (*a - '0');
		a++;
	}
	return (sign * nb);
}

void	ft_calculate(int nb1, char *a, int nb2)
{
	int						i;
	char const				*op = "+-*/%";
	t_op_functions const	func_arr[] = {add, sub, mult, div, mod};

	i = 0;
	if (*a == '/' && nb2 == 0)
	{
		ft_error(1);
		return ;
	}
	else if (*a == '%' && nb2 == 0)
	{
		ft_error(2);
		return ;
	}
	while (op[i])
	{
		if (op[i] == *a)
		{
			ft_putnbr(func_arr[i](nb1, nb2));
			return ;
		}
		i++;
	}
	ft_putnbr(0);
}

int		main(int argc, char **argv)
{
	int		nb1;
	int		nb2;
	int		l;

	l = 0;
	if (argc == 4)
	{
		nb1 = ft_get_number(argv[1]);
		nb2 = ft_get_number(argv[3]);
		while (argv[2][l])
			l++;
		if (l > 1)
			ft_putchar('0');
		else
			ft_calculate(nb1, argv[2], nb2);
		ft_putchar('\n');
	}
	return (0);
}
