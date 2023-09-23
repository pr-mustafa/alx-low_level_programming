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
	int k;

	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char e[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (l[j] != '\0')
		{
			if (s[i] == l[j])
			{
				k = j;
				s[i] = e[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}
