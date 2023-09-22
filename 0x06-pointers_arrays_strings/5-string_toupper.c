#include "main.h"

/**
 *string_toupper - change the value
 *@a: pointer of a
 * Return: Always 0 (Success)
 */
char *string_toupper(char *a)
{
	/* your code goes there */
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
		i++;
	}
	return (a);
}
