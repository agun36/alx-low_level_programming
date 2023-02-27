#include "main.h"

/**
  * rev_string - reverse a strings
  * _putchar - print each character
  * @s: char to check
  * Return: 0
  */

void rev_string(char *s)
{
	int a = 0, b, c;
	char d;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	b = 0;

	while (c >= 0 && b <  c)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
		c--;
		b++;
	}
}
