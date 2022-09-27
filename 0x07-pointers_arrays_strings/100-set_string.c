#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: the pointer to a pointer of char
 * @to: the pointer
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}

