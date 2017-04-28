/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 18:20:22 by mtan              #+#    #+#             */
/*   Updated: 2017/04/16 18:20:23 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		**ft_alloc_board(void)
{
	int		**board;
	int		i;
	int		j;

	i = 0;
	board = (int**)malloc(sizeof(int*) * 9);
	while (i < 9)
	{
		j = 0;
		board[i] = (int*)malloc(sizeof(int) * 9);
		while (j < 9)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	return (board);
}

void	ft_free_board(int **board)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		free(board[i]);
		i++;
	}
	free(board);
}
