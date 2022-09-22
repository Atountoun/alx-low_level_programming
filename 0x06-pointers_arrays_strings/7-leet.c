#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: string to be encoded
 *
 * Return: pointer to thee encoded string
 */
char *leet(char *s)
{
	char *ptr = s;
	char capitals[] = "AEOTL";
	char smalls[] = "aeotl";
	char code[] = "43071";
	int i;

	while (*s != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == capitals[i] || *s == smalls[i])
			{
				*s = code[i];
			}
		}
		s++;
	}
	return (ptr);
}
