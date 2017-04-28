#include <string.h>
#include <stdio.h>

int		ft_antidote(int i, int j, int k);

int		atoi(char *str);

int		main(int argc, char **argv)
{
	(void)argc;

	printf("%d", ft_antidote(atoi(argv[1]), atoi(argv[2]), atoi(argv[3])));
}
