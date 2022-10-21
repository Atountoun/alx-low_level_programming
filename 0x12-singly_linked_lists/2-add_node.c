#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: points to the first element of the list
 * @str: the string content of the new node
 *
 * Return: the address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup_str;
	unsigned int length = 0;
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	dup_str = strdup(str);

	if (dup_str == NULL)
	{
		free(node);
		return (NULL);
	}
	while (str[length] != '\0')
		length++;

	node->str = dup_str;
	node->len = length;
	node->next = *head;

	*head = node;

	return (node);
}
