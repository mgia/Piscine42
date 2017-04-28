/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 11:29:19 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/23 22:04:51 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	if (str != 0)
		while (str[i] != '\0')
			i++;
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	const unsigned char		*p1 = (const unsigned char *)s1;
	const unsigned char		*p2 = (const unsigned char *)s2;
	unsigned char			c1;
	unsigned char			c2;

	c1 = *p1;
	c2 = *p2;
	while (c1 == c2 && c1)
	{
		c1 = (unsigned char)*p1++;
		c2 = (unsigned char)*p2++;
	}
	return (c1 - c2);
}

int		ft_strcount_if(char *str, char needle)
{
	char	c;
	int		i;

	if (str == 0)
		return (0);
	i = 0;
	while ((c = *str++))
		i += c == needle;
	return (i);
}

char	*ft_strchr(char *str, char needle)
{
	char	c;

	if (str == 0)
		return (0);
	while ((c = *str) && c != needle)
		str++;
	return (str);
}

char	*ft_strcpy(char *dest, const char *src)
{
	char *head;

	if (!dest || !src)
		return (dest);
	head = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (head);
}
