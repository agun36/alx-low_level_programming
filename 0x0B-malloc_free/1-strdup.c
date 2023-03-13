#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to new string which is a duplicate of the string
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	int i, size;
	char *ptr;

	if (!str)
		return (NULL);

	while (str[size] != '\0')
		size++;

	ptr = malloc(size + 1);

	if (!ptr)
		return (NULL);

	for (i = 0; str[i]; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';

	return (ptr);
}
