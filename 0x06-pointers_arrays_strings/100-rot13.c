#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 *
 * Return: address of s
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;

	while (*(s + i))
	{
		j = 0;

		while (j < 52)
		{
			if (a[j] == *(s + i))
			{
				*(s + i) = b[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
