/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c												:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <mtan@student.42.us.org>				+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 13:42:38 by mtan				#+#    #+#            */
/*   Updated: 2017/04/11 13:42:40 by mtan				###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int		main(int argc, char *argv[])
{
	char	*str;

	printf("Org string: %s\n", argv[1]);
	if (argc == 2)
	{
		str = ft_strdup(argv[1]);
		printf("Dup string: %s\n", str);
	}
	return (0);
}
