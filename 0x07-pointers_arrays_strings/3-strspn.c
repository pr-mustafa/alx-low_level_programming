#include "main.h"

/**
 *_strspn - change the value
 *@s: pointer of string
 *@c: character to be search
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *c)
{
	/* your code goes there */
	unsigned int sum = 0;
	int i, j, flag;

	i = 0;
	j = 0;
	flag = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; c[j] != '\0'; j++)
		{
			if (s[i] == c[j])
				{
					flag = 1;
					break;
				}
		}
		if (flag == 0)
		break;
		else
		sum++;
	}
	return (sum);
}
