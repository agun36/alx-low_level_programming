#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


/**
* malloc_checked - should cause normal process termination with a status
* @b: allocated unsigned integer
* Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
