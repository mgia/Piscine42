#include <stdio.h>

int		ft_compact(char **tab, int length);

int		main(void)
{
	int c = 3;
	char	**argv;
	argv[0] = {0};
	printf("%s", argv[0]);
	argv[1] = "1";
	argv[2] = "2";
	int a = ft_compact(argv, 3);
	printf("%d", c);
	printf("%d", a);
	printf("%s", argv[1]);
	return (0);
}
