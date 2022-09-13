/**
 * File : 8-print_base16.c
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

	int n = '0';
	char l = 'a';

	for(; n<= '9'; n++)
	{ 
		putchar(n);
	}
	for(; l<= 'f'; l++)
	{
		putchar(l);
	}
	
	putchar('\n');

	return (0);
}
