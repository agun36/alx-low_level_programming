#include "search_algos.h"

/**
 * binary_search - entry point of the
 * function
 * @array: pointer to the first element
 * of the array to search in
 * @size: is the number of elements
 * in array
 * @value: is the value to search for
 * Return:  your function must
 * return -1 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;
	int i;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = 0; i < low; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}