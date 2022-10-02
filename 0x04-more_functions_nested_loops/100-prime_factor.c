#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - prints the prime factors of 1231952
 *
 * Return: always 0
 */
int main(void)
{
	long n = 612852475143;
	long i = 3;

	while (n % 2 == 0)
	{
		n /= 2;
	}
	while (i < n / 2)
	{
		while (n % i == 0)
		{
			n /= i;
		}
		i += 2;
	}

	printf("%ld\n", n);

	return (0);
}

