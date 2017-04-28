#include <stdio.h>

int		ft_any(char **tab, int (*f)(char*));

int		test(char *str)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			return (1);
		str++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_any(argv, test));
}
