#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 *
 * @a : a pointer to the array to be printed
 * @n : the number of elements of the array to be printed
 *
 * Return : void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
