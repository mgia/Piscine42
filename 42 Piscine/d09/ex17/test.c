#include <stdio.h>
#include <string.h>

int		ft_max(int *tab, int length);

int		*atoi(char	*str);

int		main(void)
{
	int	*tab = NULL;

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;

	printf("%d", ft_max(tab, 4));
	return (0);
}
