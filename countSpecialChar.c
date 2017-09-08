/*
 * program to count tabs, blanks and newlines 
 *
 *  author :  vishal jasrotia
 *  date : 08/29/2017
 *  ctrl +D is EOF
 */
 
#include<stdio.h>
int main(){

	long count=0;
	int c;	

	while( (c = getchar()) != EOF){
		if(c == '\n' || c == '\t' || c == ' '){
			++count;
		}
	}
	printf("Count is %ld\n", count);
	return 0;
}
