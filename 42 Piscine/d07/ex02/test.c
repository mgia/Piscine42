#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int		**tab_ulti;

	int i = ft_ultimate_range(tab_ulti, 1, 8);
	printf("Number is %d\n", i);

	int j =  0;
	// if (tab_ulti==NULL)
	// {
	// 	printf("Yes");
	// 	return 0;
	// }
	// printf("Number is %d\n", i);
	while (j < i)
	{
		printf("%d", tab_ulti[0][j]);
		j++;
	}
	return (0);
}

//trouble filling arr
