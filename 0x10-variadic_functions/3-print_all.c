#include <stdio.h>
#include <stdlib.h>
#include "variatic_functions.h"
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - prints a char
 * @arg: a list of argument pointing to the char
 *
 * Return: nothing
 */
void print_char(va_list arg)
{
	char ch;

	ch = va_arg(arg, int);
	printf("%c", ch);
}

/**
 * print_int - prints an integer
 * @arg: a list of arguments pointing to the intger
 *
 * Return: nothing
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - prints a float
 * @arg: a list of arguments pointing to the float
 *
 * Return: nothing
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, float);
	printf("%f", num);
}

/**
 * print_string - prints a string
 * @arg: a list of arguments pointing to the string
 *
 * Return: nothing
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: a string of characters representing the argument type
 * @...: a variable number of arguments to be printed
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (format && (*(format + i) != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}
	printf("\n");

	va_end(args);
}

