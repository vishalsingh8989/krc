#define MAXLEN 1000
#include<stdio.h>
#include<stdlib.h>


int readmyline(char *line);
void copy(char *line, char *longest);

int main(){
	size_t size;
	int len, max;
	char *line, *longest;
	max = 0;
	
	line  = (char*)malloc(MAXLEN*sizeof(char));
	while( (len = readmyline(line)) != 0){
		if(len >max){
			max = len;
			copy(line, longest);
		}
	}


	printf("Longest line is %d : %s\n", max, longest);	
	return 0;
}

void copy(char *from , char *to){
	
	char *ptr;
	int c, i;
	i = 0;

	ptr = &from[0];
	while(ptr != '\0'){
		i++;
		ptr++;
	}
	printf("Size of line is %d\n",i);


	to = (char*)malloc(i*sizeof(char));

	ptr = &from[0];
	i = 0;
	while( ptr != '\0'){
		printf("Copying %s ,  %c\n", ptr, *ptr);
		to[i] = *ptr;
		++ptr;
		++i;
	}

	++i;
	to[i] = '\0';
	

}

int readmyline(char *line){
	int len, i,c;
	i = 0 ;
	char *ptr;
	
	ptr = &line[0];

	//for(i = 0 ; i <  len-1 && (c = getchar())!=EOF && c != '\n' ; ++i){
	len = MAXLEN;
	printf("Start input\n");	
	while(( c=getchar())!=EOF  && c != '\n'){
		putchar(c);
		line[i] = c;
		i++;
	}
	printf("End input\n");

	if(c == '\n'){
		line[i] = '\n';
		++i;

	}

	line[i] = '\0';
	return i;
		

}
