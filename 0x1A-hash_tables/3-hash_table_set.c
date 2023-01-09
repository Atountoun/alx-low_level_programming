#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: a pointer to the hash table
 * @key: the key of the data to be stored
 * @value: the data to be stored
 *
 * Return: 1 if success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash;
	hash_node_t *node, *current;

	if (ht == NULL)
		return (0);
	if (key == NULL ||  !(*key))
		return (0);
	node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = (char *)malloc(strlen(key) + 1);
	node->value = (char *)malloc(strlen(value) + 1);
	strcpy(node->key, key);
	node->value = strdup(value);
	node->next = NULL;
	if (node->value == NULL)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	}
	hash = key_index((unsigned char *)key, ht->size);
	current = (ht->array)[hash];
	if (current == NULL)
		ht->array[hash] = node;
	else
	{
		if (strcmp(current->key, key) == 0)
			strcpy(ht->array[hash]->value, value);
		else
		{
			while (current->next != NULL)
				current = current->next;
			current->next = node;
		}
	}
	return (1);
}
