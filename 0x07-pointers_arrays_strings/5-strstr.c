#include "main.h"
#include <stdio.h>
/**
 *_strstr - change the value
 *@s: pointer of string
 *@c: character to be search
 * Return: Always 0 (Success)
 */
char *_strstr(char *s, char *c)
{
	/* your code goes there */
	int i;
	int j = 0;

	while (c[j] != '\0')
		j++;
	while (*s)
	{
		for (i = 0; c[i]; i++)
		{
			if (s[i] != c[i])
				break;
		}
		if (i != j)
			s++;
		else
			return (s);
	}
	return (NULL);
}
