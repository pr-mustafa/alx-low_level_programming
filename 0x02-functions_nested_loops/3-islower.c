#include <ctype.h>
#include "main.h"
/**
 * _islower - entry point
 *
 * Description: This function prints 1 if it is lower else print 0
 *
 * Return: void
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
