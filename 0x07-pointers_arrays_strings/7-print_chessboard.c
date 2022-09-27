#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 *
 *
 *
 */
int is_char(char c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
	{
		return 1;
	}
	return 0;
}

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pointer
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i = 0;

	while (is_char(a[i][0]) || a[i][0] == ' ')
	{
		for (unsigned int j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
		i++;
	}
}

