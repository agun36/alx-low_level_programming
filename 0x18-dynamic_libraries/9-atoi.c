#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int i = 0;
	int num = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i] != '\0')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}

	return (sign * num);
}
