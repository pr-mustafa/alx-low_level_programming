#include "main.h"

/**
 *_print_rev_recursion - print string
 *@s: string
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	/* your code goes there */
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
