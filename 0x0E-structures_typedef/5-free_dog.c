#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog
 * @d: Pointer to dog structure
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
