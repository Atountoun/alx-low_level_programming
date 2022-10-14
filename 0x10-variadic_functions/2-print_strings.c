#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between strings
 * @n: the number of strings to be passed to the function
 * @...: a variable numbers of strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i = 0;

	va_start(strings, n);
	while (i < n)
	{
		str = va_arg(strings, char *);
		if(str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(strings);
}
