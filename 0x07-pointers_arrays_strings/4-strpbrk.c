#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string source
 * @accept: the string to match
 *
 * Return: the first occurence in s that matches one of the bytes in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr = NULL;
	unsigned int i = 0;

	while (*s != '\0')
	{
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				ptr = s;
				return ptr;
			}
			i++;
		}
		s++;
		i = 0;
	}
	return ptr;
}

