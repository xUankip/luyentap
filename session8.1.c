#include <stdio.h>
#include <math.h>
void main(){
	float com=0, sale_amt;
	printf("Enter the sale amout:", sale_amt);
	scanf("%f", &sale_amt);
	if (sale_amt>=1000)
	com=sale_amt*0.1;
	printf("Commitsion", com);
	return 0;
}
