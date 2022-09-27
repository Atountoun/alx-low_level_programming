#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_digits - prints a digit character by character
 * @n: the number to print
 *
 * Return: nothing
 */
void print_digits(int n)
{
	int r;
	if (n == 0)
		return;
	r = n % 10;
	print_digits(n / 10);
	_putchar(r + '0');
}

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: a 2d array casted to a pointer
 * @size: the number of columns and rows of the matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int first_diag_sum = 0;
	int second_diag_sum = 0;
	unsigned int i = 0;

	while (i < size)
	{
		first_diag_sum += *(a + i * size + i);
		second_diag_sum += *(a + i * size + size - i - 1);
		i++;
	}
	print_digits(first_diag_sum);
	_putchar(' ');
	print_digits(second_diag_sum);
}

