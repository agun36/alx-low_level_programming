#include "main.h"
#include "stdlib.h"

/**
  * _realloc - reallocates a memory block using malloc and free
  * @ptr: pointer to the memory previously allocated with a call to malloc
  * @old_size: size, in bytes, of the allocated space for ptr
  * @new_size: new size, in bytes of the new memory block
  *
  * Return: pointer to newly allocated memory
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);
	if (ptr == NULL)
		return (ptr2);
	if (new_size > old_size)
		_memcpy(ptr2, ptr, old_size);
	free(ptr);
	return (ptr2);
}
