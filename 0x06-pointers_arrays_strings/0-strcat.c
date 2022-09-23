#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest : string to which @src will be added
 * @src : string to be added to @dest
 *
 * Return : a pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int src_length = 0;
	int dest_length = 0;
	int i = 0;

	while (src[src_length] != '\0')
		src_length++;

	while (dest[dest_length] != '\0')
		dest_length++;

	while (i < src_length)
	{
		*(dest + i + dest_length) = *(src + i);
		i++;
	}

	return (dest);
}
