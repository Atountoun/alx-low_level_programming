/**
 * File : 2-print_alphabet.c
 * Author: Tountoun Abel AYANOU
**/

#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	while(c <= 'z')
	{
		putchar(c);
		c++;
	}
	
	putchar('\n');
	
	return (0);
}

