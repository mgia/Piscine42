#include "ft_perso.h"
#include <string.h>
#include <stdio.h>

int		main(void)
{
	t_perso		jack;

	jack.name = strdup("Jack");
	jack.life = 100.0;
	jack.age = 42;
	jack.profession = SAVE_THE_WORLD;
	printf("%s\n", jack.name);
	printf("%s\n", jack.profession);
	printf("%d\n", jack.age);
	printf("%f\n", jack.life);
	return (0);
}
