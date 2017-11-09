#include "ft_putchar.c"
#include "J05/ex18/ft_strlcat.c"
#include "J05/ex17/ft_strncat.c"
#include "J05/ex16/ft_strcat.c"
#include "J05/ex15/ft_str_is_printable.c"
#include "J05/ex14/ft_str_is_uppercase.c"
#include "J05/ex13/ft_str_is_lowercase.c"
#include "J05/ex12/ft_str_is_numeric.c"
#include "J05/ex11/ft_str_is_alpha.c"
#include "J05/ex10/ft_strcapitalize.c"
#include "J05/ex09/ft_strlowcase.c"
#include "J05/ex08/ft_strupcase.c"
#include "J05/ex07/ft_strncmp.c"
#include "J05/ex06/ft_strcmp.c"
#include "J05/ex05/ft_strstr.c"
#include "J05/ex04/ft_strncpy.c"
#include "J05/ex03/ft_strcpy.c"
#include "J05/ex02/ft_atoi.c"
#include "J05/ex01/ft_putnbr.c"
#include "J05/ex00/ft_putstr.c"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int		main(int ac, char *av[])
{
	(void)ac;
	(void)av;

	if (atoi(av[1]) == 0)
	{
		printf("ft_putstr\n");
		ft_putstr(av[2]);
		putchar('\n');
		puts(av[2]);
	}
	else if (atoi(av[1]) == 1)
	{
		printf("ft_putnbr\n");
		ft_putnbr(atoi(av[2]));
		printf("\n%d\n", atoi(av[2]));
	}
	else if (atoi(av[1]) == 2)
	{
		printf("ft_atoi\n");
		printf("%d\n%d\n", ft_atoi(av[2]), atoi(av[2]));
	}
	else if (atoi(av[1]) == 3)
	{
		char dest[100];
		dest[0] = '\0';
		printf("ft_strcpy\n");
		ft_strcpy(dest, av[2]);
		printf("%s\n", dest);
		strcpy(dest, av[2]);
		printf("%s\n", dest);
	}
	else if (atoi(av[1]) == 4)
	{
		char dest[100] = "dsgalfiuafnoooooooodklsmsuxea";
		//dest[0] = '\0';
		printf("ft_strncpy\n");
		ft_strncpy(dest, av[2], atoi(av[3]));
		printf("%s\n", dest);
		strncpy(dest, av[2], atoi(av[3]));
		printf("%s\n", dest);
	}
	else if (atoi(av[1]) == 5)
	{
		printf("ft_strstr\n");
		printf("%s\n%s\n", ft_strstr(av[2], av[3]), strstr(av[2], av[3]));
	}
	else if (atoi(av[1]) == 6)
	{
		printf("ft_strcmp\n");
		printf("%d\n%d\n", ft_strcmp(av[2], av[3]), strcmp(av[2], av[3]));
	}
	else if (atoi(av[1]) == 7)
	{
		printf("ft_strncmp\n");
		printf("%d\n%d\n", ft_strncmp(av[2], av[3], atoi(av[4])),
				strncmp(av[2], av[3], atoi(av[4])));
	}
	else if (atoi(av[1]) == 8)
	{
		printf("ft_strupcase\n");
		printf("%s\n", ft_strupcase(av[2]));
	}
	else if (atoi(av[1]) == 9)
	{
		printf("ft_strlowcase\n");
		printf("%s\n", ft_strlowcase(av[2]));
	}
	else if (atoi(av[1]) == 10)
	{
		printf("ft_strcapitalize\n");
		printf("%s\n", ft_strcapitalize(av[2]));
	}
	else if (atoi(av[1]) == 11)
	{
		printf("ft_str_is_alpha\n");
		printf("%d\n", ft_str_is_alpha(av[2]));
	}
	else if (atoi(av[1]) == 12)
	{
		printf("ft_str_is_numeric\n");
		printf("%d\n", ft_str_is_numeric(av[2]));
	}
	else if (atoi(av[1]) == 13)
	{
		printf("ft_str_is_lowercase\n");
		printf("%d\n", ft_str_is_lowercase(av[2]));
	}
	else if (atoi(av[1]) == 14)
	{
		printf("ft_str_is_uppercase\n");
		printf("%d\n", ft_str_is_uppercase(av[2]));
	}
	else if (atoi(av[1]) == 15)
	{
		printf("ft_str_is_printable\n");
		printf("%d\n", ft_str_is_printable(av[2]));
	}

	else if (atoi(av[1]) == 16)
	{
		char dest[1000];
		char dest2[1000];
		ft_strcpy(dest, av[2]);
		printf("ft_strcat\n");
		printf("%s\n", ft_strcat(dest, av[3]));
		ft_strcpy(dest2, av[2]);
		printf("%s\n", strcat(dest2, av[3]));
	}
	else if (atoi(av[1]) == 17)
	{
		char dest[1000];
		char dest2[1000];
		ft_strcpy(dest, av[2]);
		printf("ft_strncat\n");
		printf("%s\n", ft_strncat(dest, av[3], atoi(av[4])));
		ft_strcpy(dest2, av[2]);
		printf("%s\n", strncat(dest2, av[3], atoi(av[4])));
	}
	else if (atoi(av[1]) == 18)
	{
		char dest[1000];
		char dest2[1000];
		ft_strcpy(dest, av[2]);
		printf("ft_strlcat\n");
		printf("result : %d\tdest : %s\n",
				(int)ft_strlcat(dest, av[3], atoi(av[4])), dest);
		ft_strcpy(dest2, av[2]);
		printf("resutl : %d\tdest : %s\n",
				(int)strlcat(dest2, av[3], atoi(av[4])), dest2);
	}
}
