#include "main.h"

/**
 *_strcmp - change the value
 *@a: pointer of a
 *@b: pointer of b
 * Return: Always 0 (Success)
 */
int _strcmp(char *a, char *b)
{
	/* your code goes there */
	int i, lena;

	i = 0;
	lena = 0;
	while (a[i] != '\n')
	{
		lena++;
		i++;
	}
	for (i = 0; i < lena; i++)
	{
		if (a[i] - b[i] == 0)
		{
			continue;
		}
		else
		{
			return (a[i] - b[i]);
		}
	}
	return (0);
}
