/**
 * File : 3-print_alphabets.c
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
	/* Print first lowercase letters */
	while(c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	/* Print uppercase letters */
	while(c <= 'Z')
	{
		putchar(c);
		c++;
	}
	
	putchar('\n');

	return (0);
}
