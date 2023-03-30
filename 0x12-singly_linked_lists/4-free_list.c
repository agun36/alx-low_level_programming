#include "lists.h"

/**
 * free_list - Frees a list_t list.
 *
 * @head: Pointer to the head of the list.
 *
 * Description: This function frees all the nodes of a list_t list.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
