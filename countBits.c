#include<stdio.h>
void countBits(int num);
int main(){

	int num;
	printf("Enter num : ");
	scanf("%d", &num);
	countBits(num);
	return 0;
}

void countBits(int num){
	int i;
	int b=0;
	for(i = 0; num !=0 ; num>>=1 ){
		if(num & 1){
			b++;
		}
	}
	printf("Bit count: %d\n", b);

}
