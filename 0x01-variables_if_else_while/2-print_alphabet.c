#include <stdio.h>

/*
 * main - This will prints letter a to z in lowercase
 *
 * Return : 0
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
