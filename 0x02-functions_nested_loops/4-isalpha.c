#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the value to be checked
 *
 * Return: 1 if c is letter, uppercase or lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
		return (1);
	return (0);
}
