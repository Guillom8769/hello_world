#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase
 * Return: always 0
 */
int main(void)
{

	char number = '0';
	char lowercase = 'a';

	while (number <= '9')

	{
		putchar(number);
		number++;
	}

	while (lowercase <= 'f')
	{
		putchar(lowercase);
		lowercase++;
	}
	putchar('\n');
	return (0);
}
