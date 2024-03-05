#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Locate character in string
 * @s: The string to search
 * @accept: The character to locate
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, t;

	for (i = 0; s[i] != '\0'; i++)

	for (t = 0; t[accept] != '\0'; t++)
	{
		if (s[i] == t[accept])
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
