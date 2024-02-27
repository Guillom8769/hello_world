#include "main.h"

/**
 * more_numbers: function that prints 10 times the numbers,
 *               from 0 to 14, followed by a new line.
 *@i: integer
 *@j: integer
 */

void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		for (j = 0; j < 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar(i + '0');
			i++;
}
