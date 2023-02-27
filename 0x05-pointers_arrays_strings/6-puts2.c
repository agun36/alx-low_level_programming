#include "main"

/**
  * puts2 - prints every other character
  * @str: character to check
  * Return: 0
  */

void puts2(char *str)
{
	int string;

	string = 0;

	while (str[string] != '\0')
	if (string % 2 == 0)
		_putchar(str[string]);
	_putchar('\n');
}
