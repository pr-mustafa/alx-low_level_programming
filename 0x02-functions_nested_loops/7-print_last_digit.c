#include <ctype.h>
#include "main.h"
/**
 * print_last_digit - entry point
 *
 * Description: This function prints 1 if it is lower else print 0
 *
 * Return: 1 for lowercase
 *
 * @n: is the character to be checked
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (x < 0)
	{
		x = x * -1;
	}
	_putchar(x + '0');
	return (x);
}
