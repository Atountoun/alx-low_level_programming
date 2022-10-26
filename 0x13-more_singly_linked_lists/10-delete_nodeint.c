#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: points to the first element of the list
 * @index: the index of the node to be deleted, start at 0
 *
 * Return: 1 is succeeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *current, *prev;
	unsigned int pos = 0;

	current = *head;
	prev = NULL;

	if (index == 0)
	{
		tmp = current;
		current = current->next;
		free(tmp);

		return (1);
	}

	while (pos < index)
	{
		if (current == NULL)
			return (-1);
		pos++;
		prev = current;
		current = current->next;
	}

	tmp = current;
	prev->next = current->next;
	free(tmp);

	return (1);
