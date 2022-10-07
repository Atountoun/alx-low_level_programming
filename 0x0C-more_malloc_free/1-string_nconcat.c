#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	char *concat;
	unsigned int len = n, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		len++;
		i++;
	}
	concat = malloc((len + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);
	len = 0;
	i = 0;

	while (s1[i])
		concat[len++] = s1[i++];
	i = 0;

	while (s2[i] && i < n)
		concat[len++] = s2[i++];
	concat[len] = '\0';

	return (concat);
}
