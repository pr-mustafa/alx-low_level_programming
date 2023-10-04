#include "main.h"

/**
 *_strlen_recursion - print string
 *@s: string
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	/* your code goes there */

	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
