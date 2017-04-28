/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 18:46:47 by mtan              #+#    #+#             */
/*   Updated: 2017/04/22 18:46:48 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);

int		ft_atoi(char **str);
int		ft_parse_atom(char **str);
int		ft_parse_factor(char **str);
int		ft_parse_sum(char **str);
int		eval_expr(char *str);

#endif
