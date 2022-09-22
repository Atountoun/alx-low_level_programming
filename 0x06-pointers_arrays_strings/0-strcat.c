#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * len - calculates the length of a string
 *
 * @s : the string 
 *
 * Return : the length of the string
 */
int len(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

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
	src_length = len(src);
	dest_length = len(dest);
	src -= src_length;
	dest -= dest_length;
	
	while (i < src_length)
	{
		*(dest + i + dest_length) = *(src + i);
		i++;
	}

	return (dest);
}
