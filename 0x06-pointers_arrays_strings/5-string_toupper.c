#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @s: string to be changed
 *
 * Return: a pointer to the result
 */
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s  -= 32;
		}
		s++;
	}

	return (ptr);
}
