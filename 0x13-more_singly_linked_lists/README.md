#0x13. C - More singly linked lists

##Write a function that prints all the elements of a listint_t list.
- Prototype: size_t print_listint(const listint_t *h);
- Return: the number of nodes
- Format: see example
- You are allowed to use printf

##Write a function that returns the number of elements in a linked listint_t list.
- Prototype: size_t listint_len(const listint_t *h)

##Write a function that adds a new node at the beginning of a listint_t list.
- Prototype: listint_t *add_nodeint(listint_t **head, const int n);
- Return: the address of the new element, or NULL if it failed

##Write a function that adds a new node at the end of a listint_t list.
- Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
- Return: the address of the new element, or NULL if it failed

##Write a function that frees a listint_t list.
- Prototype: void free_listint(listint_t *head);

##Write a function that frees a listint_t list.
- Prototype: void free_listint2(listint_t **head);
- The function sets the head to NULL

##Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
- Prototype: int pop_listint(listint_t **head);
- if the linked list is empty return 0


