
#define MAXLEN 1000

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char *mystr);


int main(){

	char *mystr;
	printf("Enter input:");
	fgets(mystr, MAXLEN, stdin);
	printf("String is  : %s\n", mystr);

	reverse(mystr);
	return 0;
}


void reverse(char *mystr){
	int len,i;
	len = strlen(mystr);

	for(i = len ; i >=0; i--){
		printf("%c", *(mystr+i));
	
	}
	printf("\n");





}
