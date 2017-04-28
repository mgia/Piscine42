#include <stdio.h>

int		*ft_map(int *tab, int length, int(*f)(int));

int		add(int n)
{
	return (n + 20);
}

int		main(void)
{
	int		arr[5] = {1,2,3,4,5};
	int		*res;
	int		i;

	res = ft_map(arr, 5, &add);
	i = 0;
	while (i < 4)
	{
		printf("%d\n", res[i]);
		i++;
	}
}
