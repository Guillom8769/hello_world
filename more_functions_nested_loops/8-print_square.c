#include "main.h"

/**
 *print_square; function prints a square 
 *@size: nb de caractère a imprimer
 *@i: integer
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\#');
			_putchar('\n');
	}
	}
}
