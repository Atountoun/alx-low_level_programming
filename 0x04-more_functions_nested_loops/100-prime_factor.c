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
	int i = 3;

	while (n % 2 == 0)
	{
		printf("%ld ", 2);
		n /= 2;
	}
	while (i < n / 2)
	{
		while (n % i == 0)
		{
			printf("%ld ", i);
			n /= i;
		}
		i++;
	}
	if (n > 2)
		printf("%ld", n);

	return (0);
}

