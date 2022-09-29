#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - checks if a number is divisible
 * @num: the number to be checked
 * @div: the divider
 *
 * Return: 0 - if the number is divisible
 *	   1 - if it's not
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to be checked
 *
 * Return: 0 - if the number is not prime
 *	   1 - if it is
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if ( n == 2 || n == 3)
		return (1);

	return (is_divisible(n, div));
}

