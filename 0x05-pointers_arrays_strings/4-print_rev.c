#include "main.h"
#include<string.h>
/**
 *print_rev - change the value
 *@s: pointer of s
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
