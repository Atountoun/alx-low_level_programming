#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @str : a pointer to the string
 *
 * Return : void
 */
void puts_half(char *str)
{
    
    int length = 0;
    int n;
    int i;

    while (*str != '\0')
    {
            length++;
            str++;
    }
    str = str - length;

    n = length / 2;
    i = length - n;

    for (; i<length; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}
