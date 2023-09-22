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
	while (a[i])
	{
		while (!(a[i] >= 'a' && a[i] <= 'z'))
		i++;
		if (
				a[i - 1] == ' ' ||
				a[i - 1] == '\t' ||
				a[i - 1] == '\n' ||
				a[i - 1] == ',' ||
				a[i - 1] == ';' ||
				a[i - 1] == '.' ||
				a[i - 1] == '!' ||
				a[i - 1] == '?' ||
				a[i - 1] == '"' ||
				a[i - 1] == '(' ||
				a[i - 1] == ')' ||
				a[i - 1] == '{' ||
				a[i - 1] == '}' ||
				a[i] == 0)
		a[i] -= 32;
		i++;
	}
	return (a);
}
