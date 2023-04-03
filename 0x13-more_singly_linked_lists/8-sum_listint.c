#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head node of the linked list
 *
 * Return: sum of all the data (n) of the linked list, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *new = head;
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += new->n;
		head = new->next;
	}

	return (sum);
}
