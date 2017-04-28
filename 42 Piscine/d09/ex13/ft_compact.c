/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 14:44:40 by mtan              #+#    #+#             */
/*   Updated: 2017/04/14 14:44:42 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		size_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != 0)
		i++;
	return (i);
}

int		ft_compact(char **tab, int length)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < length)
	{
		if (tab[i] == 0)
		{
			k = 0;
			while (tab[i + k + 1])
			{
				j = 0;
				while (tab[i + k + 1][j])
				{
					tab[i + k][j] = tab[i + k + 1][j];
					j++;
				}
				k++;
			}
		}
		i++;
	}
	return (size_tab(tab));
}
