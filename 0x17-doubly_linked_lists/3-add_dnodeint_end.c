#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: points to a pointer pointed to the first node
 * @n: integer that represents the data of the new node
 *
 * Return: the address of the new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current = *head;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (head == NULL || new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;

		current->next = new;
		new-prev = current;
	}

	return (new);
}
