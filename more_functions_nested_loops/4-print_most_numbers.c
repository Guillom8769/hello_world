#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9,
 * @i: charactere
 * Return: 0
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
			_putchar(i);
		i++;
	}
	_putchar('\n');
		return(0);
}
