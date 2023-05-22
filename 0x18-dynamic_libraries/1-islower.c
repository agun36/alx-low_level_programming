#include "main.h"

/**
  * _islower - it has an integer c
  * @c: variable for c
  *
  * Return: it will return 1 or 0
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
