/*
 * program to count number of character from keyboard
 * author : vishal jasrotia 
 * date : 08/29/2017
 * ctrl + D is EOF on MAC
 * */
#include<stdio.h>

int main(){
	long nc=0;
	while(getchar() != EOF){
		++nc;
	}
	printf("Char count is %ld\n", nc);
	return 0;
}



