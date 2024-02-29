#include "main.h"
#include <stdio.h>

/**
 *rev_string - prints a string in reverse
 * @s: string to print
 * Description: prints a string in reverse
 */

 void rev_string(char *s);
{
	int l = 0;
	int i = 0;

	while (s[i++])
		l++;

	for (i = 0; i < l; i++)
		_putchar(s[i]);

	for (i = l - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
