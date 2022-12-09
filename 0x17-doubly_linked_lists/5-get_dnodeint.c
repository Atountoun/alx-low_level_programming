#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - retuns the nth node of the list
 * @head: points to the first node of the list
 * @index: integer that represents the index of the node from 0
 *
 * Return: the nth node of NULL if it does not exists
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}

	return (NULL);
}
