#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 *
 * @str : a pointer to the string
 *
 * Return : void
 */
void puts2(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		if (count % 2 == 0) 
			_putchar(*str);
		count++;
		str++;
	}
	_putchar('\n');

}

