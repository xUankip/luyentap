#include <stdio.h>
#include <math.h>
void main(){
	int num1, num2, res;
	char op;
	num1 = 90;
	num2 = 33;
	op = '-';
	switch (op){
		case '+':
			res=num1+num2;
			printf("\n Number after Sub: %d",res);
			break;
		case '/':
			res=num1/num2;
			printf("\n Number after Div: %d", res);
			break;
		case '*':
			res=num1*num2;
			printf("\n Number after Multi: %d", res);
			break;
		case '-':
			res=num1-num2;
			printf("\n Number after '-' : %d", res);
			break;
		default:
			printf("\n Invalid");
	}
}
