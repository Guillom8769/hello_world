#include "main.h"

/**
 * int _islower - checks for lowercase character
 * c - charactère
 * Return: 1 (lower case) or 0
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
