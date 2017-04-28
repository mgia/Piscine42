#include <stdio.h>

int		ft_intcmp(int a, int b)
{
	return (a - b);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		main(void)
{
	int tab[5] = {-2147483648, -2147483648, 2, 4, 4};

	printf("%d\n", ft_is_sort(tab, 2, ft_intcmp));
	return (0);
}
