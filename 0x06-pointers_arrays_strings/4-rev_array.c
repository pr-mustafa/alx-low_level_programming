#include "main.h"

/**
 *reverse_array - change the value
 *@a: pointer of a
 *@n: length
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	/* your code goes there */
	int i, j, x;

	j = 0;
	for (i = n - 1; i >= j; i--)
	{
		x = a[j];
		a[j] = a[i];
		a[i] = x;
		j++;
	}
}
