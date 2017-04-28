#include <string.h>

int		atoi(char *str);

void	ft_takes_place(int hour);

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_takes_place(atoi(argv[1]));
}
