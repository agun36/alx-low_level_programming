#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);

	int *arr;
	int n = max - min + 1;

	arr = malloc(sizeof(int) * n);
	if (arr == NULL)
		return (NULL);

	int i;

	for (i = 0; i < n; i++)
		arr[i] = min + i;

	return (arr);
}
