#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check bits
 * @index: index of the bit to check
 *
 * Return: the value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	if ((n >> index) & 1)
		return (1);

	return (0);
}
