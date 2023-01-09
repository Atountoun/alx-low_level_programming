#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * print_chain - prints the chain in case of collision
 *
 * @head: the first node of the chain
 *
 * Return: nothing
 */
void print_chain(hash_node_t *head)
{
	hash_node_t *current;

	if (head == NULL)
		return;
	current = head;
	while (current)
	{
		printf(", '%s': '%s'", current->key, current->value);
		current = current->next;
	}
}

/**
 * hash_table_print - prints a hash table
 *
 * @ht: a pointer to the hash table that stores data
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i;
	unsigned long int counter;

	putchar('{');
	if (ht == NULL)
	{
		putchar('}');
		return;
	}
	i = 0;
	counter = 0;
	while (i++ < ht->size)
	{
		node = ht->array[i];
		if (node && counter == 0)
		{
			printf("'%s': '%s'", node->key, node->value);
			counter++;
			print_chain(node->next);
		}
		else if (node)
		{
			printf(", '%s': '%s'", node->key, node->value);
			print_chain(node->next);
		}
	}
	putchar('}');
	printf("\n");
}
