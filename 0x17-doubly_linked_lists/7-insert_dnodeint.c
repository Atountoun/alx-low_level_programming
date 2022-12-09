#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: points to a pointer pointed to the first node
 * @idx: integer that represents the index of the new node
 * @n: integer that represents the data hold by the new node
 *
 * Return: the address of the new node or NULL
 */
//dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
//{
//	if (h == NULL)
//		return (NULL);
//
//	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
//	dlistint_t *current = *h;
//	int count = 0;
//	new_node->n = n;
//
//	if (current == NULL)
//	{
//		new_node->next = NULL;
//		new_node->prev = NULL;
//		(*h) = new_node;
//	}
//	else
//	{
//		while ((*h)->next != NULL)
//		{
//			count++;
//		}
//	}
//
//	return (NULL);
//}
