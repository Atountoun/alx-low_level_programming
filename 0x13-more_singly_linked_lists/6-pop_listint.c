#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head of a listint_t linked list
 * @head: points to the first element of the list
 *
 * Return: the head node's data or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value = 0;

	if (*head == NULL)
		return (value);

	tmp = *head;
	value = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (value);
}
