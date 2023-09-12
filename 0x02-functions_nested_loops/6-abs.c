#include <ctype.h>
#include "main.h"
/**
 * _abs - entry point
 *
 * Description: This function prints 1 if it is lower else print 0
 *
 * Return: 1 for lowercase
 *
 * @n: is the character to be checked
 */

int _abs(int n)
{

	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-n);
	}
}
