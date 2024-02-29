#include "main.h"
#include <stdio.h>

/**
 *print_rev - prints a string in reverse
 * @str: string to print
 *
 * Description: prints a string
 * On success: return the number of characters printed
 */

void print_rev(char *s)
{
	int length = _strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
