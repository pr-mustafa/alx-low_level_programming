#include "main.h"

/**
 *cap_string - change the value
 *@a: pointer of a
 * Return: Always 0 (Success)
 */
char *cap_string(char *a)
{
	/* your code goes there */
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		while (!(a[i] >= 'a' && a[i] <= 'z'))
		i++;
		if (
				a[i] == ' ' ||
				a[i] == '\t' ||
				a[i] == '\n' ||
				a[i] == ',' ||
				a[i] == ';' ||
				a[i] == '.' ||
				a[i] == '!' ||
				a[i] == '?' ||
				a[i] == '"' ||
				a[i] == '(' ||
				a[i] == ')' ||
				a[i] == '{' ||
				a[i] == '}')
		a[i] -= 32;
		i++;
	}
	return (a);
}
