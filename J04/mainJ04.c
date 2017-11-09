#include "J04/ex00/ft_iterative_factorial.c"
#include "J04/ex01/ft_recursive_factorial.c"
#include "J04/ex02/ft_iterative_power.c"
#include "J04/ex03/ft_recursive_power.c"
#include "J04/ex04/ft_fibonacci.c"
#include "J04/ex05/ft_sqrt.c"
#include "J04/ex06/ft_is_prime.c"
#include "J04/ex07/ft_find_next_prime.c"
#include "J04/ex08/ft_eight_queens_puzzle.c"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int		main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	if (atoi(argv[1]) == 0)
	{
		printf("ft_iterative_factorial(atoi(argv[2])) : %d\n",
				ft_iterative_factorial(atoi(argv[2])));
	}
	else if (atoi(argv[1]) == 1)
	{
		printf("ft_recursive_factorial(atoi(argv[2])) : %d\n",
				ft_recursive_factorial(atoi(argv[2])));
	}
	else if (atoi(argv[1]) == 2)
	{
		printf("ft_iterative_power(atoi(argv[2]), atoi(argv[3])) : %d\n"
				"(int)pow(atoi(argv[2]), atoi(argv[3])) : %d\n",
				ft_iterative_power(atoi(argv[2]), atoi(argv[3])),
				(int)pow(atoi(argv[2]), atoi(argv[3])));
	}
	else if (atoi(argv[1]) == 3)
	{
		printf("ft_recursive_power(atoi(argv[2]), atoi(argv[3])) : %d\n"
				"(int)pow(atoi(argv[2]), atoi(argv[3])) : %d\n",
				ft_recursive_power(atoi(argv[2]), atoi(argv[3])),
				(int)pow(atoi(argv[2]), atoi(argv[3])));
	}
	else if (atoi(argv[1]) == 4)
	{
		printf("ft_fibonacci(atoi(argv[2]) : %d\n",
				ft_fibonacci(atoi(argv[2])));
	}
	else if (atoi(argv[1]) == 5)
	{
		printf("ft_sqrt(atoi(argv[2])) : %d\n"
				"sqrt(atoi(argv[2])) : %f\n",
				ft_sqrt(atoi(argv[2])),
				sqrt(atoi(argv[2])));
	}
	else if (atoi(argv[1]) == 6)
	{
		printf("ft_is_prime(atoi(argv[2])) : %d\n", ft_is_prime(atoi(argv[2])));
	}
	else if (atoi(argv[1]) == 7)
	{
		printf("ft_find_next_prime(atoi(argv[2])) : %d\n",
				ft_find_next_prime(atoi(argv[2])));
	}
	else if (atoi(argv[1]) == 8)
	{
		printf("ft_eight_queens_puzzle() : %d\n",
				ft_eight_queens_puzzle());
	}


}
