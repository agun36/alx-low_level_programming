#include "main.h"

/**
  * _strlen -  returns the length of a string.
  * @s: character that check string
  * Return: 0
  */

int _strlen(char *s)
{
	int a = 0; /* start the counts from 0*/

	while (*s++)
		a++;
	return (a);
}
