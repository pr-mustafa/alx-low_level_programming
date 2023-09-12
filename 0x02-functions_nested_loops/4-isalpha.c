#include <ctype.h>
#include "main.h"
/**
 * _isalpha - entry point
 *
 * Description: This function prints 1 if it is lower else print 0
 *
 * Return: 1 for lowercase
 *
 * @c: is the character to be checked
 */

int _isalpha(int c)
{

	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
