#include "main.h"

/**
 *memset: inscrit ds *s n fois la valeur b
 *@s: pointer 
 *@b: constant 
 *@n: nb de bytes à inscrire
 *return: pointer 
 */


char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	for (int i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return(p);
}
