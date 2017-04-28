/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 18:18:09 by mtan              #+#    #+#             */
/*   Updated: 2017/04/11 18:18:11 by mtan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int		main(int argc, char *argv[])
{
	int		i;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		temp = argv[i];
		argv[i] = argv[argc - 1];
		argv[argc - 1] = temp;
		argc--;
		i++;
	}
	i = 1;
	while (argv[i] != '\0')
	{
		ft_print_params(argv[i]);
		i++;
	}
	return (0);
}
