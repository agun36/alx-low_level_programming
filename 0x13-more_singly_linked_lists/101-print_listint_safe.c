#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a linked list safely
 * @head: head of the linked list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr;
	size_t count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		curr = head;
		head = head->next;
		if (curr <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
	}

	return (count);
}
