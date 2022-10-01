#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - calculates the length of a string
 *
 * @s: a pointer to the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
