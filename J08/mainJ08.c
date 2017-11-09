#include "J08/ex03/ft_abs.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	(void)ac;
	if (atoi(av[1]) == 3)
	{
		printf("%d\n", ABS(atoi(av[2])));
	}
}
