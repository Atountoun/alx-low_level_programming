/**
 * File : 102-print_comb5.c
 * Author: Tountoun Abel AYANOU
**/

#include <stdlib.h>
#include <stdio.h>

int main(void){

	int i = '0';
	int j = '0';
	int k = '0';
	int l = '0';
	for(i='0'; i<= '9'; i++){
		for(j='0'; j<='8'; j++){
			for(k='0'; k<='9'; k++){
				for(l='0'; l<='9'; l++){
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if(i != '9' || j!= '8' || k!='9' || l!='9'){
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
