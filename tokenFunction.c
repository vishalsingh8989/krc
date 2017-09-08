#include<stdio.h>
char* split_command(char *cmd, char *delim){
	static int index = 0;
	char *splitpoint;
	
	for(; cmd[index] !='\0'; ++index)
	{
		if(cmd[index] == *delim){			
			cmd[index] = '\0';
			printf("Returning : %d\n", index);
			index++;
			return &cmd[index];
			
		}
	}

	return NULL;	
	
}

int main(){
	char cmd[] = {"hello my name is vishal m Jasrotia"};
	char *stok[10];
	int startidx ;
	int idx = 0;

	startidx = -1;	
	
	
	stok[idx] = &cmd[0];
	do{
		idx++;
		stok[idx] = split_command(cmd, "m");
		
	}
	while(stok[idx] != NULL  );
	
	for(int stok_idx = 0 ; stok_idx<idx ; ++stok_idx){

		printf("tok : %s\n", stok[stok_idx]);
		

	}

	


	return 0;
}







