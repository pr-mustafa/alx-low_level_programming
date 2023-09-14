#include <ctype.h>
#include "main.h"
/**
 * _isupper - entry point
 *
 * Description: This function prints 1 if it is lower else print 0
 *
 * Return: 1 for upercase
 *
 * @n: is the character to be checked
 */

int _isupper(int n)
{

	if (n >= 65 && n <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
