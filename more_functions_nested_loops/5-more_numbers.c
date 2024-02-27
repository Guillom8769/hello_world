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
		while (j < 15)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar(i + '0');
			i++;
	}
	_putchar('\n');
}
