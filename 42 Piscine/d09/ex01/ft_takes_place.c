/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 20:15:35 by mtan              #+#    #+#             */
/*   Updated: 2017/04/13 20:44:27 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		hr;

	hr = hour;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 0)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	if (hour > 0 && hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hr, (hr + 1) % 12);
	if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	if (hour > 12 && hour < 23)
		printf("%d.00 P.M. AND %d.00 P.M.\n", hr % 12, (hr + 1) % 12);
	if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	if (hour == 24)
		printf("12.00 A.M. AND 1.00 A.M.\n");
}
