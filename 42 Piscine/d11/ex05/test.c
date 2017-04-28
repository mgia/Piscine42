#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_push_params(int ac, char **av);

int		main(int argc, char **argv)
{
	t_list	*list;
	int		i;

	i = 0;
	list = ft_list_push_params(argc, argv);
	while (list->next)
	{
		printf("%s", list->data);
		list = list->next;
	}
	printf("%s", list->data);
	return (0);
}
