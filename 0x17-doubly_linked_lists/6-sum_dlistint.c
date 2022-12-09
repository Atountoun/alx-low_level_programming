#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sums all the data of the list
 * @head: points to the first node of the list
 *
 * Return: the sum of data or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
