#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of list_t list
 * @head: points to the first element of the list
 * @str: the string content of the node
 *
 * Return: the address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	unsigned int length = 0;
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	dup = strdup(str);

	if (dup == NULL)
	{
		free(node);
		return (NULL);
	}

	while (str[length] != '\0')
		length++;

	node->str = dup;
	node->len = length;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		while ((*head)->next != NULL)
		{
			*head = (*head)->next;
		}
		(*head)->next = node;
	}

	return (*head);
}
