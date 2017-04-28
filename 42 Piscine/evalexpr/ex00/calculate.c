/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 18:47:08 by mtan              #+#    #+#             */
/*   Updated: 2017/04/22 18:47:10 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_parse_atom(char **str)
{
	int		nb;

	while (**str == ' ')
		(*str)++;
	if (**str == '(')
	{
		(*str)++;
		nb = ft_parse_sum(str);
		if (**str == ')')
			(*str)++;
		return (nb);
	}
	return (ft_atoi(str));
}

int		ft_parse_factor(char **str)
{
	int		nb;
	int		nb2;
	char	x;

	nb = ft_parse_atom(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		x = **str;
		if (x != '/' && x != '%' && x != '*')
			return (nb);
		(*str)++;
		nb2 = ft_parse_atom(str);
		if (x == '*')
			nb *= nb2;
		else if (x == '/')
			nb /= nb2;
		else
			nb %= nb2;
	}
	return (nb);
}

int		ft_parse_sum(char **str)
{
	int		nb;
	int		nb2;
	char	x;

	nb = ft_parse_factor(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		x = **str;
		if (x != '+' && x != '-')
			return (nb);
		(*str)++;
		nb2 = ft_parse_factor(str);
		if (x == '+')
			nb += nb2;
		else
			nb -= nb2;
	}
	return (nb);
}

int		eval_expr(char *str)
{
	return (ft_parse_sum(&str));
}
