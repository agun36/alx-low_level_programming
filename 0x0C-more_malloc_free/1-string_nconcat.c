#include "main.h"
#include <string.h>
#include <stdlib>
/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated_str;
	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);
	unsigned int i;

	/* Check for empty strings */

	if (s1 == NULL)
		s1_len = 0;
	if (s2 == NULL)
		s2_len = 0;

	/* Allocate memory for the concatenated string */
	concatenated_str = malloc(s1_len + n + 1);
	if (concatenated_str == NULL)
		return (NULL);

	/* Concatenate the strings */
	for (i = 0; i < s1_len; i++)
		concatenated_str[i] = s1[i];
	for (i = 0; i < n && i < s2_len; i++)
		concatenated_str[s1_len + i] = s2[i];
	concatenated_str[s1_len + i] = '\0';
	return (concatenated_str);
}
