#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

void	ft_list_clear(t_list **begin_list);

int		main(void)
{
	t_list		*link;

	link = ft_create_elem("one");
	link->next = ft_create_elem("two");
	link->next->next = ft_create_elem("three");
	link->next->next->next = ft_create_elem("four");
	link->next->next->next->next = ft_create_elem("five");
	link->next->next->next->next->next = ft_create_elem("last");

	while (link)
	{
		printf("%s\n", link->data);
		link = link->next;
	}
	// printf("%s\n", link->data);
	ft_list_clear(&link);
	while (link)
	{
		printf("%s\n", link->data);
		link = link->next;
	}
	if (link == NULL)
		printf("List has been cleared.\n");
	return (0);
}
