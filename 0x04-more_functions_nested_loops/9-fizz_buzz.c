#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers from 1 to 100, followed by a new line. FizzBuzz
 *
 * Return: always 0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
		i++;
	}
	putchar('\n');

	return (0);
}

