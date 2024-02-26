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
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (0);
	}
}
