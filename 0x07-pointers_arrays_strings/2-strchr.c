#include "main.h"
#include <stdio.h>
/**
 *_strchr - change the value
 *@s: pointer of string
 *@c: character to be search
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	/* your code goes there */

	for (;; s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
