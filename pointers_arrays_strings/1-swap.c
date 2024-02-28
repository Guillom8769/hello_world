#include "main.h"

/**
  * reset_to_98 - pointer to an int as parameter and updates the value to 98.
  * @n : pointer n
  */

void swap_int(int *a, int *b)
{
	int nombreA = 0;
	int nombreB = 0;
	*a = &nombreA;
	*b = &nombreB;

	swap_int(nombreA, nombreB);
}
