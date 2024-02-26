#include "main.h"

/**
 * print_sign - function that checks for number
 * @n : entier
 * Return: 1 (>0) -1 (<0) or 0 (==0)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
