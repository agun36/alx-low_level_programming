#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char Ah = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (Ah <= 'Z')
	{
		putchar(Ah);
		Ah++;
	}
	putchar('\n');
	return (0);
}
