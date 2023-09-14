#include <ctype.h>
#include "main.h"
/**
 * _isdigit - entry point
 *
 * Description: This function prints 1 if it is lower else print 0
 *
 * Return: 1 for upercase
 *
 * @n: is the character to be checked
 */

int _isdigit(int n)
{

	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
