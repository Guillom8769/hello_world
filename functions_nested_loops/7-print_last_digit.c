#include "main.h"

/**
 * print_last_digit - that prints the last digit of a number
 * @n : entier
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit;
	{
	last_digit = n % 10;
	return(last_digit);
	_putchar(last_digit);
	}

	return (0);
}
