#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - freees a listint_t list
 * @head: points to the first element of the list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
