#include "main.h"

/**
  * print_rev - prints a string, in reverse, followed by a new line.
  * @s: stringto print
  */

void print_rev(char *s)
{
	int a, b;

	b = 0;

	while (s[b] != '\0')
		b++;

	a = b - 1;

	while (a >= 0)
	{
		_putchar(s[a]);
		a++;
	}
	_putchar('\n');
}
