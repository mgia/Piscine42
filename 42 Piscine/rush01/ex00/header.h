/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 18:21:19 by mtan              #+#    #+#             */
/*   Updated: 2017/04/16 18:21:20 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
void	ft_print_board(int **board);
int		ft_error(void);

int		**ft_alloc_board(void);
void	ft_free_board(int **board);

int		ft_is_valid(int **board, int nb, int row, int col);
int		ft_find_solution(int **board, int row, int col, int is_reverse);
int		ft_try_move(int **board, int row, int col, int is_reverse);

int		ft_try_move_rev(int **tab, int row, int col, int is_reverse);
int		ft_compare_solution(int **board1, int **board2);

#endif
