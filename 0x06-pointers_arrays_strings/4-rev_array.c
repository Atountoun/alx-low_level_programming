#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a : array to be reversed
 * @n : number of elements of the array
 *
 * Return : nothing
 */
void reverse_array(int *a, int n)
{
	int count = 0;
	int tmp;

	while (count < n / 2)
	{
		tmp = a[count];
		a[count] = a[n - count - 1];
		a[n - count - 1] = tmp;
		count++;
	}
}
