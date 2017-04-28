#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

int		cmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			printf("hi");
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

void	ft_list_sort(t_list **begin_list, int (*cmp)());

int		main(void)
{
	t_list		*link = NULL;

	link = ft_create_elem("4");
	link->next = ft_create_elem("3");
	link->next->next = ft_create_elem("2");
	link->next->next->next = ft_create_elem("4");
	link->next->next->next->next = ft_create_elem("6");
	link->next->next->next->next->next = ft_create_elem("5");

	ft_list_sort(&link, cmp);

	while (link)
	{
		printf("%s\n", link->data);
		link = link->next;
	}
	return (0);
}

//keep testing
