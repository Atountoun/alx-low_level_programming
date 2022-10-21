#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: points to the first element of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
