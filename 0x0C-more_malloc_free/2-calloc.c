#include "main.h"

/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 *
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int bytes;

	if (nmemb == 0 || size == 0)
		return (NULL);

	bytes = nmemb * size;
	ptr = malloc(bytes);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		/* Zero out the memory */
		unsigned int i;
		char *p = ptr;

		for (i = 0; i < bytes; i++)
			p[i] = 0;
		return (ptr);
	}
}
