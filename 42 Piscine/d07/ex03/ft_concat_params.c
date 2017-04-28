/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 22:48:15 by mtan              #+#    #+#             */
/*   Updated: 2017/04/13 22:48:17 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		a;
	int		length;

	a = 1;
	length = 0;
	while (a < argc)
		length += (ft_strlen(argv[a++]) + 1);
	str = (char*)malloc(sizeof(*str) * (length));
	if (!str)
		return (NULL);
	a = 1;
	while (a < argc)
	{
		ft_strcat(str, argv[a]);
		if (a != argc - 1)
			ft_strcat(str, "\n");
		a++;
	}
	str[length] = '\0';
	return (str);
}
