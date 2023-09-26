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
	int i, sum;

	sum = 0;
	while (s[sum] != '\0')
	{
		sum += 1;
	}

	for (i = 0; i < sum; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (NULL);
}
