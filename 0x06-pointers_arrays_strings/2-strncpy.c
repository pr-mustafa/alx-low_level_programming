#include "main.h"

/**
 *_strncpy - change the value
 *@a: pointer of a
 *@b: pointer of b
 *@n: length
 * Return: Always 0 (Success)
 */
char *_strncpy(char *a, char *b, int n)
{
	/* your code goes there */
	int i;

	for (i = 0; i < n; i++)
	{
		a[i] = b[i];
	}
	return (a);
}
