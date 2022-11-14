#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unisigned int
 * @b: binary number
 *
 * Return: the unsigned number corresponding to the binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mul = 1;
	int len = 0;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;

	while (--len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		num += (b[len] - '0') * mul;
		mul *= 2;
	}

	return (num);
}
