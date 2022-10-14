#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - calculates the sum of two nunbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the result of the operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * @op_sub - calculates the difference of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the result of the operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * @op_mul - calculates the product of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the result of the operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the result of the operation
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division
 * @a: the first number
 * @b: the second number
 *
 * Return: the result of the operation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
