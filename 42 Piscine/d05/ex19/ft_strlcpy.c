/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 21:43:12 by mtan              #+#    #+#             */
/*   Updated: 2017/04/10 21:43:14 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		src_size;

	i = 0;
	while (src[i] != '\0')
		i++;
	src_size = i;
	i = 0;
	while (src[i] != '\0' && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size - 1)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (src_size);
}
