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

	for (c = 0; c < 10; c++)
	{
		putchar('0' + c);
	}
	putchar('\n');
	return (0);
}
