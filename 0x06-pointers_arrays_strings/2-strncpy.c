#include "main.h"
#include <string.h>

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
	int i, len;

	len = strlen(b);
	for (i = 0; i < n; i++)
	{
		if (i < len)
		{
			a[i] = b[i];
		}
		else
		{
			a[i] = '\0';
		}
	}
	return (a);
}
