#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

void free_chain(hash_node_t *head)
{
	hash_node_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current->key);
		free(current->value);
		free(current);
	}
}

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: a pointer to the hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	i = 0;
	while (i++ < ht->size)
	{
		hash_node_t *node = ht->array[i];
		if (node != NULL)
			free_chain(node);
	}
	free(ht->array);
	free(ht);
}
