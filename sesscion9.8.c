#include <stdio.h>
void main(){
	int num1, num2;
	num2 = 0;
	do{
		printf("Enter the number:");
		scanf("%d", &num1);
		printf("No.%d is", num1);
		num2++;
	}
	while(num1!=0);
	printf("The total numbers Entered were %d", --num2);
}
