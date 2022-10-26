#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t free_listint_safe(const listint_t **h);

/**
 * looped_listint_len - counts the number of unique nodes in a list
 * @head: points to the first element of the list
 *
 * Return: the number of uniques nodes or 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}

			return (nodes)
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - frees a listint list safely
 * @h: points to the address of the first element of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index = 0;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		while (h && *h)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			nodes++;
		}
	}
	else
	{
		while (index < nodes)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
