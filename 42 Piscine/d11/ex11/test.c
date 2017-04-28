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

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());

int		main(void)
{
	t_list		*link;
	t_list		*res;

	link = ft_create_elem("1");
	link->next = ft_create_elem("1");
	link->next->next = ft_create_elem("3");
	link->next->next->next = ft_create_elem("4");
	link->next->next->next->next = ft_create_elem("5");
	link->next->next->next->next->next = ft_create_elem("6");
	res = ft_list_find(link, "3", cmp);

	while (res)
	{
		printf("%s\n", res->data);
		res = res->next;
	}
	// if (!link)
	// 	printf("List has been cleared.\n");
	return (0);
}

//keep testing
