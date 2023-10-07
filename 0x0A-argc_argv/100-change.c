#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main.
 * @argc: The size of the argv array.
 * @argv: An array containing the program command line arguments
 *
 * Return: Always 0 || 1.
 */
int main(int argc, char **argv)
{
	int num, sum;

	if (argc < 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num = atoi(argv[1]);
	for (sum = 0; num > 0; sum++)
	{
		if (num - 25 >= 0)
		{
			num = num - 25;
		}
		else if (num - 10 >= 0)
		{
			num = num - 10;
		}
		else if (num - 5 >= 0)
		{
			num = num - 5;
		}
		else if (num - 2 >= 0)
		{
			num = num - 2;
		}
		else if (num - 1 >= 0)
		{
			num = num - 1;
		}
	}
			
	printf("%d\n", sum);
	return (0);
}
