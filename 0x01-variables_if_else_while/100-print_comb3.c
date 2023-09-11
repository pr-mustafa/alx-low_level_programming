#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int c;
	int x;

	for (c = 0; c <= 9; c++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (x > c)
			{
				putchar('0' + c);
				putchar('0' + x);
				if (c == 8 && x == 9)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
