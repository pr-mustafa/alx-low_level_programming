#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *print_array - change the value
 *@a: pointer of a
 *@n: size of elements to be print
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d",*a++);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
