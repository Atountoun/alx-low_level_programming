/**
 * File : 0-positive_or_negative.c
 * Author: Tountoun Abel AYANOU
**/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n<0)
	{
		printf("%d is nagative\n", n);
	}else if(n>0)
	{
		printf("%d is positive\n", n);
	}else
	{
		printf("%d is zero\n", n);
	}
	
	return (0);
}
