#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to new string which is a duplicate of the string
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string. It returns NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *copy;
	int len;

	if (str == NULL)
		return (NULL);
	len =  strlen(str);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	strcpy(copy,str);
	return (copy);
}
