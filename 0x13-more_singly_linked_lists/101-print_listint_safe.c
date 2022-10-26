#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

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

			return (nodes);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: points to the first element of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next,
			     nodes++;
		}
	}
	else
	{
		while (index < nodes)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			index++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
