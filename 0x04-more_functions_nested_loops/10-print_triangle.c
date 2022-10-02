#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int i = 0;
	int j;

	if (size > 0)
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				if (j < size - i - 1)
					_putchar(' ');
				else
					_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}

