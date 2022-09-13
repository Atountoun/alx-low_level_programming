/**
 * File : 4-print_alphabt.c
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
		if(c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	
	putchar('\n');
	
	return (0);
}
