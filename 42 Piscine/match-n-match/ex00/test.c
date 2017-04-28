#include <stdio.h>

int		match(char *s1, char *s2);

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc == 3)
		i = match(argv[1], argv[2]);
	if (i == 1)
		printf("Matched: 1\n");
	else
		printf("Do not Match: 0\n");
	return (0);
}
