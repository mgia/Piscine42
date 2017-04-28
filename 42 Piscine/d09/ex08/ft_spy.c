/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 15:19:55 by mtan              #+#    #+#             */
/*   Updated: 2017/04/14 15:19:57 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		danger(char *str)
{
	if (!ft_strcmp(str, "president") || !ft_strcmp(str, "attack")
		|| !ft_strcmp(str, "bauer"))
		return (1);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char *argv[])
{
	int beep;
	int i;

	i = 1;
	beep = 0;
	while (i < argc)
	{
		if (danger(ft_strlowcase(argv[i])))
		{
			ft_putstr("Alert!!!\n");
			return (0);
		}
		i++;
	}
	return (0);
}
