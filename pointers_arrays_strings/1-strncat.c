#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: pointer to the dest str
 * @src: pointer to the src str
 * @n: it will use at most n bytes from src
 * Return: dest 
 */


char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
	;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[j + i] = src[i];
	}
	dest[i + j] = '\0';

	return (dest);
}
