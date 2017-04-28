#include <stdio.h>

int		ft_count_if(char **tab, int (*f)(char*));

int		test(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}
int		main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_count_if(argv, test));
}
