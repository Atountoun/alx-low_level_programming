/**
 * File : 1-last_digit.c
 * Author: Tountoun Abel AYANOU
**/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastD;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastD = n % 10;
	
	printf("Last digit of %d is %d", n, lastD);
	if(lastD == 0)
	{
		printf(" and is 0\n");
	}else if(lastD > 5)
	{
		printf(" and is greater than 5\n"); 
	}else if(lastD < 6)
	{
		printf(" and is less than 6 and not 0\n");
	}
	
	return (0);
}
