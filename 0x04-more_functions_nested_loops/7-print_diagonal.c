#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		while (i < n)
		{
			j = 0;
			while (j < n && j <= i)
			{
				if (i == j)
					_putchar('\\');
				else
					_putchar(' ');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');

}

