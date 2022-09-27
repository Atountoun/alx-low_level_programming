#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string within which the program walk through
 * @accept: the string containing character to match in s
 *
 * Return: the number of bytes in s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i = 0;
	int is_present = 0;

	while (*s != '\0')
	{
		while (accept[i] != '\0')
		{
			if (*s == accept[i++])
			{
				is_present = 1;
				break;
			}
		}
		if (is_present)
		{
			length++;
			s++;
			is_present = 0;
			i = 0;
		}
		else
		{
			return length;
		}
	}
	return length;
}

