#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: pointer to the dest str
 * @src: pointer to the src str
 * @n: it will use at most n bytes from src
 * Return: S1
 */


char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
	;

	while (src[i] != '\0')
	{
		scr[i] < n,
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
