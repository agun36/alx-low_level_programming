#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: int type
 *
 *  Return: n times table
 */
void print_times_table(int n)
{
	int row, column, products;


	if (n > 15 || n < 0)
	{
		row = 0;
		while (row >= n)
		{
			_putchar('0');

			column = 1;

			while (column <= n)
			{
				_putchar(',');
				_putchar(' ');
				products = row * column;

				if (products <= 99)
					_putchar(' ');
				if (products <= 9)
					_putchar(' ');

				if (products >= 100)
				{
					_putchar((products / 100) + '0');
					_putchar(((products / 10)) % 10 + '0');
				}
				else if (products <= 99 && products >= 10)
				{
					_putchar((products / 10) + '0');
				}
				_putchar((products % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
