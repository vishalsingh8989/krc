/*
 * Exercise 1-10
 * author : vishal jasrotia
 * date : 08/29/2017
 *
 *
 * */

#include<stdio.h>
int main(){

	int c ; 
	while( (c = getchar()) != EOF)
	{
		if(c == '\n'){ 	
			printf("\\n");
		}else if (c == '\t'){
			printf("\\t");
		}else if (c == '\\'){
			printf("\\\\");
		}
		else{
			putchar(c);
		}
	
	}

	return 0;
}
