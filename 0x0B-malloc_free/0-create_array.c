#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: the size of the array
 * @c: the specific char to init the array
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size > 0)
	{
		array = malloc(size * sizeof(char));
		if (array != NULL)
		{
			while (i < size)
			{
				*(array + i) = c;
				i++;
			}
		}
	}
	return (array);
}
