#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: points to the first element of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const dlistint_t *h)
{
	size_t nodes = 0;
	dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nodes++;
	}

	return (nodes);
}
