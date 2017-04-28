/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 18:20:01 by mtan              #+#    #+#             */
/*   Updated: 2017/04/16 18:20:04 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_try_move_rev(int **board, int row, int col, int is_reverse)
{
	int		i;

	i = 9;
	while (i > 0)
	{
		if (ft_is_valid(board, i, row, col))
		{
			board[row][col] = i;
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
		i--;
	}
	return (0);
}

int		ft_compare_solution(int **board1, int **board2)
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (board1[i][j] != board2[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
