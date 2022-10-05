#include <stdlib.h>
#include "main.h"

int len(char *str);
char *str_concat(char *s1, char *s2);

/**
 * len - returns the length of a string
 * @str: the string to be calculated the length
 *
 * Return: the length of the string
 */
int len(char *str)
{
	int length = 0;

	while (*(str + length))
		length++;

	return (length);
}

/**
 * str_concat - concatenates two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 *
 * Return: NULL on failure, a pointer to the newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, first_len = 0;
	int j = 0, second_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	first_len = len(s1);
	second_len = len(s2);
	concat = malloc(first_len + second_len);
	if (concat != NULL)
	{
		while (i < first_len)
		{
			*(concat + i) = *(s1 + i);
			i++;
		}
		while (j < second_len)
		{
			*(concat + i++) = *(s2 + j++);
		}
	}
	return (concat);
}
