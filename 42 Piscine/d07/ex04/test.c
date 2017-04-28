#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	char	**res;
	int		a;

	res = ft_split_whitespaces(argv[1]);
	a = 0;
	while (res[a] != 0)
	{
		printf("%s\n", res[a]);
		a++;
	}
	return (0);
}
