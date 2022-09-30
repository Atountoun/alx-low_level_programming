#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_result - prints the input parameter
 * @n: the number to be printed
 *
 * Return: nothing
 */
void print_result(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if ((n / 10) > 0)
		print_result(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * print_string - prints a string
 * @s: the string to be printed
 *
 * Return: nothing
 */
void print_string(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
}

/**
 * main - multiplies two numbers
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to each argument
 *
 * Return: 0- if two args are passed, 1- if not
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_string("Error\n");
		return (1);
	}

	print_result(atoi(argv[1][0]) * atoi(argv[2][0]));
	_putchar('\n');

	return (0);
}

