#include <ctype.h>
#include "main.h"
/**
 * more_numbers - entry point
 *
 * Description: This function prints 1 if it is lower else print 0
 *
 * Return: 1 for upercase
 *
 */
void more_numbers(void)
{
	int i,j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
