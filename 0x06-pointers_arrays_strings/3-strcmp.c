#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1 : first string
 * @s2 : second string
 *
 * Return 0, -15 or 15
 */
int _strcmp(char *s1, char *s2)
{
	int length;
	int count = 0;
	int first_length = 0;
	int second_length = 0;

	while (*s1 != '\0')
	{
		first_length++;
		s1++;
	}
	while (*s2 != '\0')
	{
		second_length++;
		s2++;
	}
	if (first_length < second_length)
		length = first_length;
	else
		length = second_length;
	while (count < length)
	{
		if (*s1 < *s2)
			return (-15);
		else if (*s1 > *s2)
			return (15);
		count++;
		s1++;
		s2++;
	}
	if (first_length < second_length)
		return (-15);
	else if (first_length > second_length)
		return (15);
	return (0);

}
