#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string within which the search will happen
 * @c: the character to locate in s
 *
 * Return: the first occurence of c in s or NULL if not found
 */
char *_strchr(char *s, char c)
{
	char *ptr = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			ptr = s;
			return ptr;
		}
		s++;
	}
	return ptr;
}

