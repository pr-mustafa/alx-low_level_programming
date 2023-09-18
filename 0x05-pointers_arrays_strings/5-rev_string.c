#include "main.h"
#include<string.h>
/**
 *rev_string - change the value
 *@s: pointer of s
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int i, j, len;
	char ch;

	j = 0;
	len = strlen(s) - 1;
	for (i = len; i >= j; i--)
	{
		ch = s[j];
		s[j] = s[i];
		s[i] = ch;
		j++;
	}
}
