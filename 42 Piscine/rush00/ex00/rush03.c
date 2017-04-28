/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 01:56:21 by mtan              #+#    #+#             */
/*   Updated: 2017/04/09 23:00:25 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putline(char start, char end, char fill, int length)
{
	ft_putchar(start);
	while (length > 2)
	{
		ft_putchar(fill);
		length -= 1;
	}
	if (length == 2)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int length, int width)
{
	int		count;

	if (length <= 0 || width <= 0)
		return ;
	count = width;
	while (count >= 1)
	{
		if (count == width || count == 1)
			ft_putline('A', 'C', 'B', length);
		else
			ft_putline('B', 'B', ' ', length);
		count -= 1;
	}
}
