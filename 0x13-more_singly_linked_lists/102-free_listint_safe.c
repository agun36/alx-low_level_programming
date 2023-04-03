#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list in a safe way
 * to avoid double-free errors, freeing the memory occupied
 * by the list nodes in a single pass.
 * @h: a pointer to the head of the list
 *
 * Return: the size of the list that was freed
 * The function sets the head to NULL
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *tmp;

	while (*h)
	{
		size++;
		if (*h <= (*h)->next)
		{
			free(*h);
			*h = NULL;
			break;
		}
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
	}
	return (size);
}
