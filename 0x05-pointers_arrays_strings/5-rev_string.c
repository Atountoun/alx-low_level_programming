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
	int count = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	while (count < length / 2)
	{
		char temp = *(s - length + count);
		*(s - length + count) = *(s - count - 1);
		*(s - count - 1) = temp;
		count++;
	}

}

