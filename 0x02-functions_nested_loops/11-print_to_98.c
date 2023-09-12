#include "main.h"
#include<stdio.h>

/**
  * print_to_98 - Prints every minute of the day of Jack Bauer
  *
  * @a: is loop
  * Return: ...
  */
void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = 0; a <= 98; a++)
		{
			printf("%d, ",a);
		}
	}
	else
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d, ",a);
		}
	}
	printf("\n");
}
