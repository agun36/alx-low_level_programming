#include "main.h"

/**
 * main - prints all alphabets in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int alphabets = 'a';

	while (alphabets <= 'z')
	{
		_putchar(alphabets);
		alphabets++;
	}
	_putchar('\n');
}
