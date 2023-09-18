#include "main.h"
#include<string.h>
/**
 *puts_half - change the value
 *@s: pointer of s
 * Return: Always 0 (Success)
 */
void puts_half(char *s)
{
	int i, n, len;

	len = strlen(s) - 1;
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}

	for (i = n+1; i <= len; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
