#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to be printed the sign
 *
 * Return: 1 if n is greatet than 0, 0 if n equals 0 and -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}

