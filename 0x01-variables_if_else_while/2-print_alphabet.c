#include <stdio.h>

/**
 *  main - start point
 *
 *  Return :0 (success)
 */
int main(void)
{
	char ch="a";

	while(ch<="z")
	{
		putchar(ch);
		ch++;
	}
	putchar("\n");
	return 0;
}
