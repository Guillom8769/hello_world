#include "main.h"

/**
 *print_diagonal: draws a diagonal line
 *@n: nb de caractère a imprimer
 *@i: integer
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
	}
	}

	_putchar('\n');
}
