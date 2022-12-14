#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number o integers passed to the function
 * @...: a variable number of numbers to be printed
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i = 0;
	va_start(nums, n);

	while (i < n)
	{
		printf("%d", va_arg(nums, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}

	printf("\n");

	va_end(nums);
}
