#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i++])
	{
		j++;
	}
	j = 0;

	while (src[i] && i < n)
	{
		dest[j++] = src[i];
		i++;
	}
	return (dest);
}
