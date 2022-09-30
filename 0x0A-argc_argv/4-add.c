#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 *
 *
 */
void print_result(int n)
{
	if ((n / 10) > 0)
		print_result(n / 10);
	putchar((n % 10) + '0');
}

void print_string(char *s)
{
	while (*s)
	{
		putchar(*s);
		s++;
	}
}
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
		
int main(int argc, char *argv[]__attribute__((unused)))
{
	int result = 0;
	/*int i = 0; */

	if (argc > 1)
	{
		printf("Ok");

	}
	print_result(result);
	putchar('\n');

	return (0);
}

