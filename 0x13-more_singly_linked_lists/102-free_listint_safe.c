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
	listint_t *current, *temp;
	size_t count = 0;

	if (h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
		count++;

		if (temp <= current)
			break;
	}

	*h = NULL;

	return (count);
}
