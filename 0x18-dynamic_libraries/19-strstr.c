#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: Pointer to the first occurrence of the substring needle in the
 * string haystack, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
	int match = 0;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			match = 1;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					match = 0;
					break;
				}
			}
			if (match == 1)
				return (haystack + i);
		}
	}

	return (NULL);
}
