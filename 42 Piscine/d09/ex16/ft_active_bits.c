/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 16:08:25 by mtan              #+#    #+#             */
/*   Updated: 2017/04/14 16:08:26 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	int				i;
	unsigned int	res;
	unsigned int	n;

	res = 0;
	i = 0;
	n = (unsigned int)value;
	while (i < 32)
	{
		res += n % 2;
		n /= 2;
		i++;
	}
	return (res);
}
