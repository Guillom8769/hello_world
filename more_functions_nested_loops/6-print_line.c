#include "main.h"

/**
 *print_line: draws a straight line
 *@n: nb de caractère a imprimer 
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		for(i = 0; i < n; i++)
			_putchar('_')
	}
}
