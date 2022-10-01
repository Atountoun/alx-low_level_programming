#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @c: The character tp be checked
 *
 * Return: 1 if character is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
