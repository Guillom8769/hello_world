#include "main.h"

/**
 * print_sign - function that checks for number
 * @n : entier
 * Return: absolute value 
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
	return (0);
}
