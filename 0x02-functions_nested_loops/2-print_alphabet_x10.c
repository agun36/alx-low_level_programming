#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabet ten times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char i, j;

	i = 0;

	while (i <= 9)
	{
		j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
