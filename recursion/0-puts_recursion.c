#include "main.h"

/**
 *_puts_recursion - prints a string
 * @s: string to print
 *
 * Description: prints a string
 * On success: return the number of characters printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
