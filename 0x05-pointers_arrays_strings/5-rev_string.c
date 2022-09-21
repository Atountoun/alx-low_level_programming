#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s : a pointer to the string
 *
 * Return : void
 */
void rev_string(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s -= 1;
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	*s = '\0';
	_putchar('\n');
}

