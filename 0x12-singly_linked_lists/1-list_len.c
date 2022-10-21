#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t list
 * @h: points to the first element of the list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elts = 0;

	while (h)
	{
		elts++;
		h = h->next;
	}

	return (elts);
}
