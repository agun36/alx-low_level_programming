#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If list is empty, set head to point to new node */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse to end of list */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	/* Set last node's next pointer to point to new node */
	temp->next = new_node;

	return (new_node);
}
