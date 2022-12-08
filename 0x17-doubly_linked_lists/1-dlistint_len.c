#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - calculates the number of elements of the list
 * @h: points to the first element of the list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	dlistint_t *temp = h;

	while (temp != NULL)
	{
		nodes++;
		temp = temp->next;
	}

	return (nodes);
}
