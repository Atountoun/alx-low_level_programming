#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the linked list
 * @head: points to the first element of the list
 * @index: the index of the node, starting at 0
 *
 * Return: the address of the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head)
	{
		if (counter == index)
			return (head);
		counter++;
		head = head->next;
	}

	return (NULL);
}
