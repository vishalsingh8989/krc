/*
 * Exercise 1-9
 * program to convert multiple blanks spaces in string in single blank space
 * author: vishal jasrotia
 * date : 08/29/2017
 *
 * */

#define PRENOTBLANK	0
#define PREBLANK	1
#include<stdio.h>
int main(){

	int enc = PRENOTBLANK;
	int c = 0;

	while((c = getchar())!=EOF){
		if(c == ' ' && enc == PRENOTBLANK){
			putchar(c);
			enc = PREBLANK;
		}
		else if(c == ' ' && enc == PREBLANK){
			
		}else{
			putchar(c);
			enc = PRENOTBLANK;
		}
		
	
	}
	return 0;
}
