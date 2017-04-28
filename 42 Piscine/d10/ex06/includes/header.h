/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 23:23:35 by mtan              #+#    #+#             */
/*   Updated: 2017/04/17 23:23:36 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

typedef int	(*t_op_functions)(int, int);

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_error(int n);
void	ft_putnbr(int n);

int		add(int a, int b);
int		mult(int a, int b);
int		sub(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);

#endif
