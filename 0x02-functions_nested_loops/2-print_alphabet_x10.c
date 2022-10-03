#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 97;
		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar('\n');
	}
}

