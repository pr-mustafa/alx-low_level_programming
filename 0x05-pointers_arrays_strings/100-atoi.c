#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 *_atoi - change the value
 *@a: pointer of a
 * Return: Always 0 (Success)
 */
int _atoi(char *a)
{
	/* your code goes there */
	int val, i, startIndex, endIndex, len;

	i = 0;
	startIndex = 0;
	endIndex = 0;

	len = strlen(a);
	for (i = 0; i < len; i++)
	{
		if (isdigit(s[i]))
		{
			if (startIndex = 0)
			{
				startIndex = i;
			}
		}
		else
		{
			endIndex = i;
		}

				
	val = atoi(a);

	return (val);
}
