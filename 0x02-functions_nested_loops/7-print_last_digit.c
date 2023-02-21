#include "main.h"

/**
 * print_last_digit - print the last digit of numbers
 *@n: find arg n
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int lastValue;

	lastValue = n % 10;
	if (lastValue < 0)
	{
		lastValue = lastValue * -1;
	}
	_putchar(lastValue + '0');
	return (lastValue);
}
