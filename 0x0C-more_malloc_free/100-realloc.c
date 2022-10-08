#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory space previously allocated
 * @old_size: the size in bytes of the allocated space for ptr
 * @new_size: the new size in bytes of the new memory block
 *
 * Return: NULL or a pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tmp;
	char *copy;
	void *block;
	unsigned int i = 0;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		block = malloc(new_size);
		return (block);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	copy = ptr;
	block = malloc(sizeof(*copy) * new_size);

	if (block == NULL)
	{
		free(ptr);
		return (NULL);
	}
	tmp = block;

	while (i < new_size && i < old_size)
		tmp[i++] = *copy++;
	free(ptr);
	return (block);
}
