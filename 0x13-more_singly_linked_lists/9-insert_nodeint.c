#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: points to the first element of the list
 * @idx: the index where the node should be added, start at 0
 * @n: the value to be stored in the node
 *
 * Return: the address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int pos = 0;
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	current = *head;
	new->n = n;

	if (idx == 0)
	{
		new->next = current;
		*head = new;
		return (new);
	}

	while (pos < idx)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		pos++;
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
