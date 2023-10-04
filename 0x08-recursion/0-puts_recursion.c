#include "main.h"

/**
 *_puts_recursion - print string
 *@s: string
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	/* your code goes there */
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(++s);
	}
}
