#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

void	add(void *data)
{
	(void)*data;
	printf("enter\n");
}

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

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

int		main(void)
{
	t_list		*link;

	link = ft_create_elem("1");
	link->next = ft_create_elem("2");
	link->next->next = ft_create_elem("3");
	link->next->next->next = ft_create_elem("4");
	link->next->next->next->next = ft_create_elem("5");
	link->next->next->next->next->next = ft_create_elem("6");
	ft_list_remove_if(&link, "1", cmp);

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
