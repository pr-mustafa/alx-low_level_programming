#include "main.h"

/**
 *_memcpy - change the value
 *@dest: pointer of destination
 *@src: pointer of source
 *@n: length
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* your code goes there */
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
