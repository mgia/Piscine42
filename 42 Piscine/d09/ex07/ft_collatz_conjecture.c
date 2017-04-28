/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 15:10:38 by mtan              #+#    #+#             */
/*   Updated: 2017/04/14 15:10:40 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int	count;

	count = 0;
	if (base % 2)
	{
		base *= 3;
		base++;
	}
	else
		base /= 2;
	if (base > 1)
		count = ft_collatz_conjecture(base);
	return (count + 1);
}
