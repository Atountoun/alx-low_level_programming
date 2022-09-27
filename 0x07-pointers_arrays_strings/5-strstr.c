#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the source string
 * @needle: the substring to locate
 *
 * Return: the pointer to the beginning of the located string, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr = NULL;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			ptr = haystack;
			return ptr;
		}
		haystack++;
	}
	return ptr;
}

