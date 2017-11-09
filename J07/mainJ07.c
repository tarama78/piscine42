#include "J07/ex06/ft_convert_base.c"
#include "J07/ex05/ft_print_words_tables.c"
#include "J07/ex04/ft_split_whitespaces.c"
#include "J07/ex03/ft_concat_params.c"
#include "J07/ex02/ft_ultimate_range.c"
#include "J07/ex01/ft_range.c"
#include "J07/ex00/ft_strdup.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(c));
}

int		main(int ac, char *av[])
{
	(void)ac;
	if (atoi(av[1]) == 0)
	{
		printf("ft_strdup\n");
		printf("%s\n%s\n", ft_strdup(av[2]), strdup(av[2]));
	}
	else if (atoi(av[1]) == 1)
	{
		int		i = -1;
		int		*table = ft_range(atoi(av[2]), atoi(av[3]));
		printf("ft_range\n");
		while (++i < atoi(av[3]) - atoi(av[2]))
			printf("%d\n", table[i]);
	}
	else if (atoi(av[1]) == 2)
	{
		int		i = -1;
		int		*table;

		printf("ft_ultimate_range\n");
		printf("return : %d\n", ft_ultimate_range(&table, atoi(av[2]), atoi(av[3])));
		while (++i < atoi(av[3]) - atoi(av[2]))
			printf("%d\n", table[i]);
	}
	else if (atoi(av[1]) == 3)
	{
		printf("ft_concat_params\n");
		printf("%s", ft_concat_params(ac, av));
	}
	else if (atoi(av[1]) == 4)
	{
		int		i = -1;
		char	**table = ft_split_whitespaces(av[2]);
		printf("ft_split_whitespaces\n");
		while (table[++i]  != 0)
			printf("%s--", table[i]);
	}
	else if (atoi(av[1]) == 5)
	{
		printf("ft_print_words_tables\n");
		ft_print_words_tables(ft_split_whitespaces(av[2]));
	}
	else if (atoi(av[1]) == 6)
	{
		printf("ft_convert_base\n");
		printf("%s\n", ft_convert_base(av[2], av[3], av[4]));
	}
}
