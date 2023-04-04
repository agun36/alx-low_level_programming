#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t count = 0;

	if (h != NULL)
		while (tmp != NULL)
		{
			printf("%d\n", tmp->n);
			count++;
			tmp = tmp->next;
		}
	return (count);
}
