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
	_putchar(*s);
	s++;
}
