#include "main.h"

/**
 * check - checks for the square root
 * @a:int
 * @b:int
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	/*Base cases*/
	if (n == 0 || n == 1)
		return n;

	/*Try all numbers starting from 1,and going until n/2*/
	int i = 1, result = 1;

	while (result <= n)
	{
		i++;
		result = i * i;
	}
	if (result == n)
		return (i);
	else
		return (-1);
}
