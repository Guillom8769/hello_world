#include "main.h"

/**
 * print_to_98 - function that adds two integers
 * @n: entier
 */
void print_to_98(int n)
	{
		if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}

	}
