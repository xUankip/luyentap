#include <stdio.h>
int main(){
	int i,j,k;
	i=0;
	printf("Enter no. of row");
	scanf("%d",&i);
	printf("\n");
	for (j=0;j<i;j++){
		printf("\n");
		for (k=0;k<j;k++)
		printf("*");
	}
}
