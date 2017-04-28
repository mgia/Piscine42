#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

t_list *ft_list_at(t_list *begin_list, unsigned int nbr);

int		main(void)
{
	t_list		*link;
	t_list		*res = NULL;
	unsigned int	n = 3;
	link = ft_create_elem("one");
	link->next = ft_create_elem("two");
	link->next->next = ft_create_elem("three");
	link->next->next->next = ft_create_elem("four");
	link->next->next->next->next = ft_create_elem("five");
	link->next->next->next->next->next = ft_create_elem("last");


	res = ft_list_at(link, n);
	while (res)
	{
		printf("%s\n", res->data);
		res = res->next;
	}
	if (!res)
		printf("List has been cleared.\n");
	return (0);
}

//keep testing
