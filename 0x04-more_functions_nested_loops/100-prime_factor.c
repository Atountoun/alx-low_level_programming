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
	int n = 1231952;
	int i = 3;

	while (n % 2 == 0)
	{
		printf("%d ", 2);
		n /= 2;
	}
	while (i < n / 2)
	{
		while (n % i == 0)
		{
			printf("%d ", i);
			n /= i;
		}
		i++;
	}
	if (n > 2)
		printf("%d", n);

	return (0);
}

