#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14, followed by a new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{	
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar( (i % 10) + '0');
		}
		j++;
		_putchar('\n');
	}
}
