#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_result - prints a number
 * @n: the number to be printed
 *
 * Return: nothing
 */
void print_result(int n)
{
	if ((n / 10) > 0)
		print_result(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * print_string - prints a string
 * @s: a pointer to the string to be printed
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
 * is_number - checks if a string if a number
 * @s: the string to be checked
 *
 * Return: 1 - if it is a number, 0 else
 */
int is_number(char *s)
{
	while (*s)
	{
		if (!(*s >= '0' && *s <= '9'))
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to each argument
 *
 * Return: 0 - if all others args than the program's name are digit, 1 if else
 */		
int main(int argc, char *argv[]__attribute__((unused)))
{
	int result = 0;
	int i = 1;

	while (i < argc)
	{
		if (!is_number(argv[i]))
		{
			print_string("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
		i++;
	}

	print_result(result);
	_putchar('\n');

	return (0);
}

