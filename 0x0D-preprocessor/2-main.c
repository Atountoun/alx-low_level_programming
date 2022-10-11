#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: always 0
 */
int main(void)
{
	char[] s = __FILE__;
	int i = 0;

	while(s[i] != '\0')
		_putchar(s[i++]);
	_putchar('\n');

	return (0);
}
