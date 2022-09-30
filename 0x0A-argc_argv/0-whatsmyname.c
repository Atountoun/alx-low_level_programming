#include <stdio.h>
#include "main.h"

/**
 * main - prints the program's name, followed by a new line
 * @argc: the number of arguments
 * @argv: an array of pointer to each argument
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc)
	{
		while (*argv[0])
		{
			_putchar(**argv);
			argv[0]++;
		}
		_putchar('\n');
	}
	return (0);
}

