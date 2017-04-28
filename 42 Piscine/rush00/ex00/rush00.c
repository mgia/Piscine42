/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 01:54:11 by mtan              #+#    #+#             */
/*   Updated: 2017/04/09 23:08:47 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putline(char end, char fill, int length)
{
	ft_putchar(end);
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
			ft_putline('o', '-', length);
		else
			ft_putline('|', ' ', length);
		count -= 1;
	}
}
