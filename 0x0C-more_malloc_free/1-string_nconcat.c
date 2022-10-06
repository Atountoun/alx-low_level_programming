#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int len(char *s);
char *string_nconcat(char *s1, char *s2, unsigned int b);

/***
 * len - the length of  a string
 * @s: a pointer to the string
 *
 * Return: the number of characters of s
 */
int len(char *s)
{
	int length = 0;
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
	int f_len, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	f_len = len(s1);
	i = 0;
	ptr = malloc(f_len + n + 1);

	if (ptr == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	while (i < n)
	{
		*ptr = s2[i];
		ptr++;
		i++;
	}
	*ptr = '\0';

	return (ptr);
}


