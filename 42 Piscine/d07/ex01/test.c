#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int		*str;
	int		i;

	// getting seg fault error
	str = ft_range(16, 16);
	i = 0;
	if (str == NULL)
	{
		printf("Yes");
		return 0;
	}
	while (i < 5)
	{
		printf("%d", str[i]);
		i++;
	}
	return (0);
}



// int		main(int argc, char *argv[])
// {
// 	int		*str;
// 	while (argc == 3)
// 	{
// 		str = ft_range(atoi(argv[1]), atoi(argv[2]));
// 		while (*str)
// 		{
// 			printf("%d", *str);
// 			str++;
// 		}
// 	}
// }
