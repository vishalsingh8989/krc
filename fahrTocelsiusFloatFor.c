/*
 * print fahrenheit to celsius table
 * author: vishal jasrotia
 * date: 08/29/2017
 * */


#include<stdio.h>
int main(){
	float fahr, celsius;
	int lower = 0;
	int upper = 300;
	int step = 20;


	fahr = lower;
	printf("******************\n");
	printf("celsius  -->  fahr\n");
	printf("******************\n");
	for(fahr = 0.0 ; fahr <= 300.00 ;fahr = fahr+ 20.0){
		celsius = 5.0*(fahr-32.0)/9.0;
		printf("%6.2f\t%4.2f\n", celsius, fahr);
		//fahr = fahr + step;

	
	}



	return 0;
}
