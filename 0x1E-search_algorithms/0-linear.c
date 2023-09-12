#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using the Linear search algorithm
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Returns: The index of the first occurrence of the value in the array, or -1 if the value is not found
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	for (size_t i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}