#include "main.h"
/**
 * rot13 -  encodes a string into rot13.
 * @s: string to code
 * Return: the enconde string.
 */
char *rot13(char *s)
{
	int i;
	int j;
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char e[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = e[j];
				i++;
				j = 0;
			}
		}
	}
	return (s);
}
