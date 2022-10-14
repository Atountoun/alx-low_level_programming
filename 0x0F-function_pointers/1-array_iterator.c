#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: the array to be iterated
 * @size: the size of the array
 * @action: a pointer to the function to be executed
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		while (size > 0)
		{
			action(*array);
			array++;
			size--;
		}
	}
}
