#include "main.h"
#include <stdio.h>

/**
 *print_rev - prints a string in reverse
 * @s: string to print
 *
 * Description: prints a string in reverse 
 */

void print_rev(char *s)
{
	int l = 0;
	int i = 0;

	while (s[i++])
		l++;
	for (i = l - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}


