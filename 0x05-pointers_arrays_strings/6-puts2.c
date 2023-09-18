#include "main.h"
#include<string.h>
/**
 *puts2 - change the value
 *@s: pointer of s
 * Return: Always 0 (Success)
 */
void puts2(char *s)
{
	int i, len;

	len = strlen(s) - 1;
	for (i = 0; i <= len; i+=2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
