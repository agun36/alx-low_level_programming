#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head node of the linked list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to the nth node of the linked list, or NULL if the node does
 * not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	if (i == index && current != NULL)
		return (current);
	else
		return (NULL);
}
