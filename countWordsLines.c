/*
 * count number of characters, words and lines
 * author: vishal jasrotia
 * date : 08/29/2017
 *
 * */

#define IN    0
#define OUT   1

#include<stdio.h>
int main(){
	int nc = 0,nw = 0,nl = 0;
	int c;
	int state = IN;
	while((c = getchar())!=EOF)
	{
	   ++nc;
	   if(c == '\n'){
		   ++nl;
	   }
	   if((c == ' ' || c == '\n' || c == '\t') && state==IN){
		state = OUT;
		++nw;
	   }else if(state == OUT ){
		state = IN;
		
   	   }

	}


	printf("Character count %d\nWord count %d\nLine count %d\n", nc, nw,nl);

	return 0;
}

