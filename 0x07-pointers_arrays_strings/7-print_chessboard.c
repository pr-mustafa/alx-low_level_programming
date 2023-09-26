#include "main.h"

/**
 *print_chessboard - change the value
 *@dest: pointer of destination
 *@src: pointer of source
 *@n: length
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	/* your code goes there */
	int i, j;
	
	i = 0;
	j = 0;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j == 7)
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
			else
				_putchar(a[i][j]);
		}
	}
}
