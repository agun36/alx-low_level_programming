#include <stdio.h>

/**
 * main - printing aplhabet of A to Z
 *
 * Return :0 (success)
 */
int main(void)
{
	char ch = "a";

	while (ch <= "z")
	{
		putchar(ch);
		ch++;
	}
	putchar("\n");
	return (0);
}
