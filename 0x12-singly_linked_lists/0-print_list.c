#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_list(const list_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%u] (nil)\n", h->len);
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		node_count++;
		h = h->next;
	}
	return (node_count);
}
