#include "main.h"

/**
 *_memset - change the value
 *@a: pointer of a
 *@b: pointer of b
 *@n: length
 * Return: Always 0 (Success)
 */
char *_memset(char *a, char b, unsigned int n)
{
	/* your code goes there */
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		a[i] = b;
	}
	return (a);
}
