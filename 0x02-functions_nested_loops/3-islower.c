#include <ctype.h>
#include "main.h"
/**
 * _islower - entry point
 *
 * Description: This function prints 1 if it is lower else print 0
 *
 * Return: 1 for lowercase
 *
 * @c is the character to be checked
 */

int _islower(int c)
{

	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
