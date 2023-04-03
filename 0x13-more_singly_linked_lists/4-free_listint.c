#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list
 * @head: Pointer to the head node of the list
 **/
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
