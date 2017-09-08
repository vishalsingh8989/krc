/*
 * print fahrenheit to celsius table
 * author: vishal jasrotia
 * date: 08/29/2017
 * */


#include<stdio.h>
int main(){
	int fahr, celsius;
	int lower = 0;
	int upper = 300;
	int step = 20;


	fahr = lower;
	printf("******************\n");
	printf("celsius  -->  fahr\n");
	printf("******************\n");
	while(fahr <=upper){
		celsius = 5*(fahr-32)/9;
		printf("%d\t%d\n", celsius, fahr);
		fahr = fahr + step;

	
	}



	return 0;
}
