#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: This function prints the alphabet 10 times, in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
