#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest : string to which @src will be added
 * @src : string source
 * @n : the number of bytes of @src to be added
 *
 * Return : a pointer to the concatenation result
 */
char *_strncat(char *dest, char *src, int n)
{
	int src_length = 0, 
	int dest_length = 0;
	int i = 0;

	while (*src != '\0')
	{
		src_length++;
		src++;
	}
	while (*dest != '\0')
	{
		dest_length++;
		dest++;
	}

	src -= src_length;
	dest -= dest_length;

	while (i < src_length && i < n)
	{
		*(dest + i + dest_length) = *(src + i);
		i++;
	}

	return (dest);

}
