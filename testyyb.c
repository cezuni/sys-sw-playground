#include <stdio.h>

void printstar(int star){
	int i,j;
	for (i=1;i<(star+1);i++){
		for(j=0;j<i;j++){
			printf("*");
		}
	printf("\n");}
}

void main(void){
int a=3;
printstar(a);}

