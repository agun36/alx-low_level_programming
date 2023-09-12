#include "search_algos.h"

/**
 * binary_search - entry point of the
 * function
 * @array: pointer to the first element
 * of the array to search in
 * @size: is the number of elements
 * in array
 * @value: is the value to search for
 * Return: index containing value, or -1 if
 * value not found or array is NULLyour function
 * return -1 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;
	size_t i = 0;

	if (array != NULL)
	{
		while (low <= high)
		{
			mid = (low + high) / 2;
			printf("Searching in array: ");
			for (i = low; i < high; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
			if (array[mid] < value)
			{
				low = mid + 1;
			}
			else if (array[mid] > value)
			{
				high = mid - 1;
			}
			else
			{
				return (mid);
			}
		}
	}
	return (-1);
}