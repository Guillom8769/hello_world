#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet without e and q
 * Return: always 0
 */
int main(void)
{

	int digit_number = '0';

	while (digit_number <= '9')

	{

		putchar(digit_number);

		digit_number++;

	}
	putchar('\n');
	return (0);
}
