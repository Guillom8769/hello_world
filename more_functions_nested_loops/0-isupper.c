#include "main.h"

/**
 * _isupper - checks for uppercase character: man isupper
 * @c: charactère
 * Return: 1 (upper case) or 0
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
