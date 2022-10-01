#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_number - prints a number
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
 * print_string - prints a string
 * @s: pointer to the string to be printed
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
 * main - prints the minimum number of coins to make change for an account of money
 * @argc: number of command line arguments
 * @argv: array of pointers to each argument
 *
 * Return: 1 - if number of argument is not exactly 1, 0 - if else
 */
int main(int argc, char *argv[])
{
	int number_of_coins = 0, i = 0;
	int money;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		print_string("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		_putchar('0');
	}
	else
	{
		while (i < 5)
		{
			if (money >= coins[i])
			{
				number_of_coins += money / coins[i];
				money %= coins[i];
			}
			i++;
		}
		print_number(number_of_coins);
	}
	_putchar('\n');

	return (0);
}

