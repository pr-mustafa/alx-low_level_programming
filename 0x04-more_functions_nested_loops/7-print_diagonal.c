#include <ctype.h>
#include "main.h"
/**
 * print_diagonal - entry point
 *
 * Description: This function prints 1 if it is lower else print 0
 *
 * Return: 1 for upercase
 *
 * @n: is the lenght of line
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
