#include "main.h"

/**
 *_pow_recursion - print string
 *@x: first variable
 *@y: second variable
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
	/* your code goes there */

	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
