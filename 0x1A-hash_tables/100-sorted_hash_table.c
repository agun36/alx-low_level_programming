#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the hash table
 *
 * Return: pointer to the created hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	return (ht);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: the hash table to add/update the key/value to
 * @key: the key string (cannot be an empty string)
 * @value: the value associated with the key (duplicated)
 *
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *temp, *prev;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	prev = NULL;

	while (temp != NULL && strcmp(temp->key, key) < 0)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp != NULL && strcmp(temp->key, key) == 0)
	{
		free(temp->value);
		temp->value = strdup(value);
		if (temp->value == NULL)
			return (0);
		return (1);
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = temp;

	if (prev != NULL)
		prev->next = new_node;
	else
		ht->array[index] = new_node;

	if (temp == NULL)
		ht->stail = new_node;

	if (prev != NULL)
		new_node->sprev = prev;
	else
		new_node->sprev = NULL;

	if (temp != NULL)
		temp->sprev = new_node;

	new_node->snext = temp;

	if (temp == NULL)
		ht->stail = new_node;

	if (ht->shead == NULL || strcmp(ht->shead->key, key) > 0)
		ht->shead = new_node;

	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key in the sorted hash table
 * @ht: the hash table to search
 * @key: the key string
 *
 * Return: the value associated with the key, or NULL if key is not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;
	
	if (ht == NULL || key == NULL || *key == '\0')
	return (NULL);
	
	index = key_index((const unsigned char *)key, ht->size);
	
	node = ht->array[index];
	
	while (node != NULL && strcmp(node->key, key) < 0)
		node = node->next;
	
	if (node != NULL && strcmp(node->key, key) == 0)
		return (node->value);
	
	return (NULL);
}

/**
 * shash_table_print - prints the key/value pairs in the sorted hash table
 * @ht: the hash table to print
 *
 * Return: void
*/
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *node;
int flag = 0;

if (ht == NULL)
return;

printf("{");
node = ht->shead;

while (node != NULL)
{
if (flag == 1)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
flag = 1;
node = node->snext;
}

printf("}\n");
}

/**

shash_table_print_rev - prints the key/value pairs in the sorted hash table in reverse order

@ht: the hash table to print

Return: void
*/
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *node;
int flag = 0;

if (ht == NULL)
return;

printf("{");
node = ht->stail;

while (node != NULL)
{
	if (flag == 1)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
flag = 1;
node = node->sprev;
}

printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: the hash table to delete
 * 
 * Return: void
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;
	unsigned long int i;
	
	if (ht == NULL)
		return;
	
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}
	free(ht->array);
	free(ht);
}
