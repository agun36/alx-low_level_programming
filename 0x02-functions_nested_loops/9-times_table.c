#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int row;
	int column;
	int products;

	row = 0;

	while (row <= 9)
	{
		while (column <= 9)
		{
			products = column * 9;
			_putchar(',');
			_putchar(' ');

			if (products <= 9)
			{
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			_putchar('\n');
			column++;
		}
		_putchar('\n');
		row++;
	}
}
