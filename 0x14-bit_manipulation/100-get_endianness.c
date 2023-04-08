#include "main.h"

/**
 * get_endianness - Checks d endianness.
 *
 * Return: 0 if big-endian and (i) if little-endian.
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *) &i;

	return (*c);
}
