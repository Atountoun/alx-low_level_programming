#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _pow_recursion - returns the value of x ** y
 * @x: the number to be raised
 * @y: the power
 *
 * Return: the value of x ** y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

