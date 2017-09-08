/*
 * input out put test
 * author : vishal jasrotia
 * date: 08/29/2017
 * ctrl +D is EOF on Mac 
 * */

#include<stdio.h>
int main(){

	int c;
	c = getchar();
	while(c != EOF){
		putchar(c);
		c = getchar();
	}



	return 0;
}

