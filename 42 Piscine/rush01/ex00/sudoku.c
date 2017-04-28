/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 18:20:12 by mtan              #+#    #+#             */
/*   Updated: 2017/04/16 18:20:13 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_is_valid(int **board, int nb, int row, int col)
{
	int		i;
	int		row_start;
	int		col_start;

	i = 0;
	row_start = (row / 3) * 3;
	col_start = (col / 3) * 3;
	while (i < 9)
	{
		if (board[row][i] == nb)
			return (0);
		if (board[i][col] == nb)
			return (0);
		if (board[row_start + (i % 3)][col_start + (i / 3)] == nb)
			return (0);
		i++;
	}
	return (1);
}

int		ft_fill_board(int **board, char **str)
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (str[i + 1][j])
		{
			if (str[i + 1][j] == '.')
				board[i][j] = 0;
			else if (str[i + 1][j] >= '0' && str[i + 1][j] <= '9')
			{
				if (ft_is_valid(board, (str[i + 1][j] - '0'), i, j))
					board[i][j] = str[i + 1][j] - '0';
			}
			else
				return (0);
			j++;
		}
		if (j != 9)
			return (0);
		i++;
	}
	return (1);
}

int		ft_try_move(int **board, int row, int col, int is_reverse)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (ft_is_valid(board, i + 1, row, col))
		{
			board[row][col] = i + 1;
			if ((col + 1) < 9)
				if (ft_find_solution(board, row, col + 1, is_reverse))
					return (1);
				else
					board[row][col] = 0;
			else if ((row + 1) < 9)
				if (ft_find_solution(board, row + 1, 0, is_reverse))
					return (1);
				else
					board[row][col] = 0;
			else
				return (1);
		}
		i++;
	}
	return (0);
}

int		ft_find_solution(int **board, int row, int col, int is_reverse)
{
	if (row == 9 && col == 9)
		return (1);
	if (board[row][col] != 0)
	{
		if ((col + 1) < 9)
			return (ft_find_solution(board, row, col + 1, is_reverse));
		else if ((row + 1) < 9)
			return (ft_find_solution(board, row + 1, 0, is_reverse));
		else
			return (1);
	}
	else
	{
		if (is_reverse)
			return (ft_try_move_rev(board, row, col, is_reverse));
		else
			return (ft_try_move(board, row, col, is_reverse));
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		**board;
	int		**board_rev;

	board = ft_alloc_board();
	if (argc != 10)
		return (ft_error());
	if (!(ft_fill_board(board, argv) && ft_find_solution(board, 0, 0, 0)))
	{
		ft_error();
		return (0);
	}
	board_rev = ft_alloc_board();
	ft_fill_board(board_rev, argv);
	ft_find_solution(board_rev, 0, 0, 1);
	if (ft_compare_solution(board, board_rev))
		ft_print_board(board);
	else
		ft_error();
	ft_free_board(board);
	ft_free_board(board_rev);
	return (0);
}
