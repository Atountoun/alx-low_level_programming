/**
 * File : 101-print_comb4.c
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
	int k = '0';
	for(; i<= '7'; i++)
	{
		for(j=i+1; j<='8'; j++)
		{
			for(k=j+1; k<='9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if(i != '7' || j!= '8' || k!='9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
