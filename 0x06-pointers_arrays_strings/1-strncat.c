#include "main.h"
#include <string.h>
/**
 *_strncat - change the value
 *@a: pointer of a
 *@b: pointer of b
 *@n: length
 * Return: Always 0 (Success)
 */
char *_strncat(char *a, char *b, int n)
{
	/* your code goes there */
	char *c = strncat(a, b, n);

	return (c);
}
