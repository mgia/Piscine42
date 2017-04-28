#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

void	add(void *data)
{
	printf("a");
	t_list *hi;
	hi = ft_create_elem("a");
	data = hi->data;
}
void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

int		main(void)
{
	t_list		*link;

	link = ft_create_elem("1");
	link->next = ft_create_elem("2");
	link->next->next = ft_create_elem("3");
	link->next->next->next = ft_create_elem("4");
	link->next->next->next->next = ft_create_elem("5");
	link->next->next->next->next->next = ft_create_elem("6");
	ft_list_foreach(link, &add);

	while (link)
	{
		printf("%s\n", link->data);
		link = link->next;
	}
	if (!link)
		printf("List has been cleared.\n");
	return (0);
}

//keep testing
