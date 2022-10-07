#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of elements of the array
 * @size: the size bytes each element
 *
 * Return: NULL if nmemb or size is 0, else a pointer to memory space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array_ptr = malloc(nmemb * size);
	if (arra_ptr != NULL)
		return (array_ptr);

	return (NULL);
}	
