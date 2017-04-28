#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);

int		main(void)
{
	t_list		*link = NULL;
	t_list		*dup;

	link = ft_create_elem("1");
	link->next = ft_create_elem("2");
	link->next->next = ft_create_elem("3");
	link->next->next->next = ft_create_elem("4");
	link->next->next->next->next = ft_create_elem("5");
	link->next->next->next->next->next = ft_create_elem("6");

	dup = ft_create_elem("1");
	dup->next = ft_create_elem("2");
	dup->next->next = ft_create_elem("3");
	dup->next->next->next = ft_create_elem("4");
	dup->next->next->next->next = ft_create_elem("5");
	dup->next->next->next->next->next = ft_create_elem("6");
	ft_list_merge(&link, dup);

	while (link)
	{
		printf("%s\n", link->data);
		link = link->next;
	}
	// if (!link)
	// 	printf("List has been cleared.\n");
	return (0);
}

//keep testing
