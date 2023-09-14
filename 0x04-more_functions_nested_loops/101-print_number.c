#include "main.h"
/**
 * print_number - entry point
 *
 * Description: This function prints 1 if it is lower else print 0
 *
 * Return: 1 for upercase
 *
 * @n: is the character to be checked
 */

void print_number(int n)
{
	int length, div, max, flag;

	flag = 0;
	if (n < 0)
	{
		flag = 1;
		n = -n;
	}
	length = 1;
	max = 1;
	div = n / 10;
	while (div != 0)
	{
		length++;
		max *= 10;
		div = div / 10;
	}
	if (flag == 1)
	{
		_putchar('-');
	}
	if (length == 1)
	{
		_putchar(n + '0');
	}
	else
	{
		_putchar((n / max) + '0');
		while (length != 1)
		{
			n = n % max;
			max /= 10;
			_putchar((n / max) + '0');
			length--;
		}
	}
}
