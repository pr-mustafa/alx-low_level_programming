#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k<= 9; k++)
			{
				if (j > i && k > j)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (i == 7 && j == 8 && k==9)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
