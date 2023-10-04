#include "main.h"

/**
 *factorial - print string
 *@n: string
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	/* your code goes there */

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
