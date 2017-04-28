/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 15:54:15 by mtan              #+#    #+#             */
/*   Updated: 2017/04/14 23:23:19 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char				**ft_split_whitespaces(char *str);

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strcpy(char *src)
{
	char	*res;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	res = (char*)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i] != '\0')
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*res;
	int			i;

	res = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		res[i].size_param = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strcpy(av[i]);
		res[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	res[i].str = 0;
	return (res);
}
