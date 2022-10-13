#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters passed to the function
 * @...: a variable number of parameters to calculate the sum of
 *
 * Return: if n == 0 - 0, else the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);

	while (i < n)
	{
		sum += va_arg(nums, int);
		i++;
	}
	va_end;

	return (sum);
}
