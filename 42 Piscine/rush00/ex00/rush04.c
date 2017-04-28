/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 01:21:30 by mtan              #+#    #+#             */
/*   Updated: 2017/04/09 23:15:38 by pmcgoran         ###   ########.fr       */
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

	if (width <= 0 || length <= 0)
		return ;
	count = width;
	while (count >= 1)
	{
		if (count == length)
			ft_putline('A', 'C', 'B', width);
		else if (count == 1)
			ft_putline('C', 'A', 'B', width);
		else
			ft_putline('B', 'B', ' ', width);
		count -= 1;
	}
}
