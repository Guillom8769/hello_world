#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase
 * Return: always 0
 */
int main(void)
{

	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')

	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
