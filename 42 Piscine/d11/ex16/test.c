#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

int		cmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());

int		main(void)
{
	t_list		*link;

	link = ft_create_elem("1");
	link->next = ft_create_elem("2");
	link->next->next = ft_create_elem("2");
	link->next->next->next = ft_create_elem("4");
	link->next->next->next->next = ft_create_elem("5");
	link->next->next->next->next->next = ft_create_elem("6");
	ft_sorted_list_insert(&link, "3", cmp);

	while (link)
	{
		printf("%s\n", link->data);
		link = link->next;
	}
}
//keep testing
