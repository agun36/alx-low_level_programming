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
	int i, size = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	ptr = (char *)malloc((sizeof(char) * size) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		ptr[i] = str[i];
	ptr[size] = '\0';

	return (ptr);
}
