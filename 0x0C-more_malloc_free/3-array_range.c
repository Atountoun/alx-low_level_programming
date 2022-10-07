#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the first value in the array
 * @max: the last value in the array
 *
 * Return: NULL on errors, pointer to the newly created array otherwise
 */
int *array_range(int min, int max)
{
	int  *array;
	int i = 0, n = max - min + 1;

	if (min > max)
		return (NULL);

	array = malloc(n * sizeof(int));

	if (array == NULL)
		return (NULL);

	while (i < n)
	{
		array[i] = min++;
		i++;
	}
	return (array);
}
