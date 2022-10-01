#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the destination memory area
 * @src: the source memory area from where to copy
 * @n: the number of bytes from src to dest
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	unsigned int i = 0;

	while (i < n)
	{
		*dest = *(src + i);
		dest++;
		i++;
	}
	return ptr;
}

