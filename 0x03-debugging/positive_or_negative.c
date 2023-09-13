#include "main.h"

/* more headers goes there */

/**
 * positive_or_negative - Entry point
 *
 * @n: parm2
 * Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{

	/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
}
