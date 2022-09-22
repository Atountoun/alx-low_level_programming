#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest : string which will be replaced by the content of @src
 * @src : string source
 * @n : number of bytes to be copied
 *
 * Return : a pointer to the result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int length = 0;
	int i=0;

	while (*src != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	if (n > length)
	{
		dest[i] = '\0';
	}

	return (dest);
}
