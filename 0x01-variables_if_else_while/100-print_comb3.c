/**
 * File : 100-print_comb3.c
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
	int j = '0';
	for(; i<= '8'; i++)
	{
		for(j=i+1; j<='9'; j++)
		{
			putchar(i);
			putchar(j);
			if(i != '8' || j!= '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
