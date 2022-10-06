#include <stdio.h>
#include <stdlib.h>
#include "main.h"

unsigned int len(char *s);
char *string_nconcat(char *s1, char *s2, unsigned int n);

/***
 * len - the length of  a string
 * @s: a pointer to the string
 *
 * Return: the number of characters of s
 */
unsigned int len(char *s)
{
	unsigned int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * @n: the number of bytes of s2 to be concatened to s1
 *
 * Return: NULL if it fails, otherwise a pointer to the new memory space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int f_len = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	f_len = len(s1);
	if (n >= 0)
	{
		ptr = malloc((f_len + n + 1) * sizeof(char));

		if (ptr == NULL)
			return (NULL);


		while (i < f_len)
		{
			ptr[i] = *s1;
			i++;
			s1++;
		}
		while (j < n)
		{
			ptr[f_len + j] = s2[j];
			j++;
		}
		ptr[f_len +j] = '\0';

		return (ptr);
	}
	return (NULL);
}


