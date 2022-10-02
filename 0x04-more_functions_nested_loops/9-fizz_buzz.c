#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers from 1 to 100, followed by a new line. But for multiples
 * 	of three prints Fizz and for those multiples of five Buzz. For numbers
 * 	multiples of both threee and five prints FizzBuzz
 *
 * Return: always 0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
		i++;
	}
	putchar('\n');

	return (0);
}

