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
	int last;

	if (n < 0)
	{
		n = n * -1;
	}
	last = n % 10;
	_putchar('0' + last);
	return (last);
}
