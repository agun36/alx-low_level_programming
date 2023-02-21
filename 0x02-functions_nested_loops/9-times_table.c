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
		_putchar('0');
		column = 1;

		while (column <= 9)
		{
			products = column * 9;
			_putchar(',');
			_putchar(' ');

			if (products <= 9)
			{
				_putchar(' ');
				_putchar(products + '0');
			}
			else
			{
				_putchar(products / 10 + '0');
				_putchar(products % 10 + '0');
			}
			column++;
		}
		_putchar('\n');
		row++;
	}
}
