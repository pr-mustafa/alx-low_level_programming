#include "main.h"

/**
 *swap_int - change the value
 *@a: pointer of a
 *@b: pointer of b
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	/* your code goes there */
	int c = *a;
	*a = *b;
	*b = c;
}
