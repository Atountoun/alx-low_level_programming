#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s : a pointer to the string
 *
 * Return : void
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

