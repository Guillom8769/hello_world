#include "main.h"
#include <stdio.h>

/**
 *rev_string - prints a string in reverse
 * @s: string to print
 * Description: prints a string in reverse
 */

 void rev_string(char *s)
{
	int length = _strlen(s);
	int i = length - 1;
	int j = 0;
	char r[100];

	while (i >= 0)
	{
		r[j] = s[i];
		i--;
		j++;
	}
	_putchar('\n');
}

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
