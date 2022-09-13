/**
 * File : 7-print_tebahpla.c
 * Author: Tountoun Abel AYANOU
**/

#include <stdlib.h>
#include <stdio.h>

int main(void){
	char c = 'z';
	while(c >= 'a'){
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}

