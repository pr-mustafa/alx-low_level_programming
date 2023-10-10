#include <stdio.h>
/* more headers goes there */

/**
 * add - Entry point
 *
 * @x: first parm
 * @y: second parm
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i,prev,sum;

	prev = 0;
	sum = 0;
	for (i = 0;i < 10;i++)
	{
		if (i == 0 || i == 1)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d, ", prev + sum);
		}
		prev = i;
		sum = sum + prev;
	}

	return (0);
}
