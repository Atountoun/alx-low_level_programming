#include <stdlib.h>
#include "main.h"

int len(char *str);
char *_strdup(char *str);

/**
 * len - calculates the length of a string
 * @str: the string to calculates the length
 *
 * Return: the number of characters of the string
 */
int len(char *str)
{
	int length = 0;

	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory with a copy of str
 * @str: a pointer to the string to be copied in the newly allocaed space in memory
 *
 * Return: NULL if str = NULL, pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i = 0, length = 0;
	char *dup;

	if (str != NULL)
	{
		length = len(str);
		dup = malloc(length * sizeof(char));
		if (dup != NULL)
		{
			while (i < length)
			{
				*(dup + i) = *(str + i);
				i++;
			}
		}
	}
	return (dup);
}

