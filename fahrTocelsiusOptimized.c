/*
 * print fahrenheit to celsius table
 * author: vishal jasrotia
 * date: 08/29/2017
 * */

#define LOWER   0.0
#define UPPER   300.0
#define STEP    20.0

#include<stdio.h>
int main(){
	float fahr, celsius;
	printf("******************\n");
	printf("celsius  -->  fahr\n");
	printf("******************\n");
	for(fahr=LOWER; fahr < UPPER; fahr = fahr + STEP){	
		printf("%4.2f\t%4.2f\n", (5.0*(fahr-32.0)/9.0), fahr);
	}

	return 0;
}
