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
	int i, j, lena, lenb, x;

	i = 0;
	j = 0;
	lena = 0;
	lenb = 0;
	x = 0;
	while (a[i] != '\0')
	{
		lena++;
		i++;
	}
	while (b[j] != '\0')
	{
		lenb++;
		j++;
	}
	if (lena <= lenb)
	{
		x = lena;
	}
	else
	{
		x = lenb;
	}
	for (i = 0; i < x; i++)
	{
		if ((a[i] - b[i]) == 0)
		{
			continue;
		}
		else
		{
			return ((a[i] - b[i]));
		}
	}
	return (0);
}
