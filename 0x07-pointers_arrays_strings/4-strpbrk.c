#include "main.h"
#include <stdio.h>
/**
 *_strpbrk - change the value
 *@s: pointer of string
 *@c: character to be search
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *c)
{
	/* your code goes there */
	int i, j, flag;
	char *p;

	i = 0;
	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; c[j] != '\0'; j++)
		{
			if (c[j] == s[i])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			p = &s[i];
			return (p);
		}
	}
	return (NULL);
}
