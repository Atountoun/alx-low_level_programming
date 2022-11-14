#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of different bits in m and n
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits different
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
