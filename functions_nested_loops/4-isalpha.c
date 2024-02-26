#include "main.h"

/**
 * _isalpha - function that checks for lowercase or uppercase character
 * @c : character
 * Return: 1 (lower& upper case) or 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
