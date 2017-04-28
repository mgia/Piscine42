#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

void	add(void *vstr)
{
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

void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)());

int		main(void)
{
	t_list		*link;

	link = ft_create_elem("1");
	link->next = ft_create_elem("1");
	link->next->next = ft_create_elem("3");
	link->next->next->next = ft_create_elem("4");
	link->next->next->next->next = ft_create_elem("5");
	link->next->next->next->next->next = ft_create_elem("6");
	ft_list_foreach_if(link, &add, "1", cmp);
	return (0);
}
