#include "main.h"
/**
 * print_number - entry point
 *
 * Description: This function
 *
 * @n: is the character to be checked
 */

void print_number(int n)
{
	int length, div, max;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
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
