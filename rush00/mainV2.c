#include <stdio.h>
#include <stdlib.h>

void	rush(int x, int y);

int main(int ac, char *av[])
{
	(void)ac;
	if (atoi(av[1]) == 0)
	{
		rush(atoi(av[2]), atoi(av[3]));
	}
	else
	{
		printf("\n1, 1\n");
		rush(1, 1);
		printf("\n1, 5\n");
		rush(1, 5);
		printf("\n5, 1\n");
		rush(5, 1);
		printf("\n1, 0\n");
		rush(1, 0);
		printf("\n0, 1\n");
		rush(0, 1);
		printf("\n-1, 5\n");
		rush(-1, 5);
		printf("\n5, -1\n");
		rush(5, -1);
		printf("\n0, 0\n");
		rush(0, 0);
		printf("\n-3, -3\n");
		rush(-3, -3);
		printf("\n5, 5\n");
		rush(5, 5);
		printf("\n4, 8\n");
		rush(4, 8);
		printf("\n8, 4\n");
		rush(8, 4);
	}
	return (0);
}
