#include <ctype.h>
#include "main.h"
/**
 * print_sign - entry point
 *
 * Description: This function prints 1 if it is lower else print 0
 *
 * Return: 1 for lowercase
 *
 * @n: is the character to be checked
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
