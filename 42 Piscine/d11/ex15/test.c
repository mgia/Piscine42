#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

void ft_list_reverse_fun(t_list *begin_list);

int		main(void)
{
	t_list		*link;

	link = ft_create_elem("one");
	link->next = ft_create_elem("two");
	link->next->next = ft_create_elem("two");
	link->next->next->next = ft_create_elem("four");
	link->next->next->next->next = ft_create_elem("five");
	link->next->next->next->next->next = ft_create_elem("last");
	ft_list_reverse_fun(link);

	while (link)
	{
		printf("%s\n", link->data);
		link = link->next;
	}
	// if (!link)
	// 	printf("List has been cleared.\n");
	// return (0);
}

//keep testing
