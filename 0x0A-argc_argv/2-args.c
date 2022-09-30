#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: the number of arguments passed
 * @argv: an array of pointers to each argument
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		while (*argv[count])
		{
			_putchar(*(argv[count]));
			argv[count]++;
		}
		count++;
		_putchar('\n');
	}

	return (0);
}

