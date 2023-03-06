#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		num = putchar(num);
		num++;
	}

	num = 'a';

	while (num <= 'f')
	{
		num = putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
