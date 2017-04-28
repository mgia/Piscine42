#include <unistd.h>

void	print(int n)
{
	n = n + '0';
	write(1, &n, 1);
	write(1, "\n", 1);
}

void	ft_foreach(int *tab, int length, void (*f)(int));

int		main(void)
{
	int		arr[5] = {1,2,3,4,5};
	ft_foreach(arr, 5, &print);
	return (0);
}
