#include "main.h"

/**
 *_memset: inscrit ds *s n fois la valeur b
 *@s: pointer 
 *@b: constant 
 *@n: nb de bytes à inscrire
 *return: pointer 
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
		[s] = b;
	return(s);
}
