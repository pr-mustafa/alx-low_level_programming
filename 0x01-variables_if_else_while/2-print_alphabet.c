#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char c='a';
	for (c = 'a'; c <='z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return(0);
}
