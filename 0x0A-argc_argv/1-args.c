#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_number - prints an input number
 * @n: the number to be printed
 *
 * Return: nothing
 */
void print_number(int n)
{
	if ((n / 10) > 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * main - prints the number of arguments passed into the program
 * @argc: the number of arguments passed
 * @argv: an array of pointers to each argument
 *
 * Return: always 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	print_number(argc - 1);
	_putchar('\n');

	return (0);
}

