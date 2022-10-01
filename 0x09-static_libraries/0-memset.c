#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: the memory area to fill
 * @b: the byte with which the memory will be filled
 * @n: the size of the memory to fill
 *
 * Return: the pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return ptr;
}

