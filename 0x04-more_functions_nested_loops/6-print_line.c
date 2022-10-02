#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of time the character _ should be printed
 *
 * Return: nothing
 *
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}

