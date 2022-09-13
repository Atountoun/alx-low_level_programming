/**
 * File : 6-print_numberz.c
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

	int i = '0';

	for(; i<='9'; i++)
	{
		putchar(i);
	}
	
	putchar('\n');

	return (0);
}

