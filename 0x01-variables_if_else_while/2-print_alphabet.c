#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: 'print out a to z'
 *
 * Return : 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	return (0);
}
